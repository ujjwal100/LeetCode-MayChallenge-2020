// Time Complexity : O(N)
// Space Complexity : O(N)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int search(TreeNode *curr , int &parent , int value, int h){
        if(!curr)
            return 0;
        if(curr->val == value)
            return h;
        parent = curr->val;
        int left=search(curr->left ,parent , value , h+1 );
        if(left)
            return left;
        parent = curr->val;
        return search(curr->right , parent , value , h+1);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root)
            return 0;
        if(root->val == x || root->val ==y)
            return 0;
        int x_height=0 , y_height=0 , x_par=-1 , y_par=-1;
        
        x_height=search(root ,x_par, x, x_height);
        y_height=search(root, y_par, y, y_height);        
        if(x_height==y_height && x_par != y_par)
            return 1;
        return 0;
    }
};
