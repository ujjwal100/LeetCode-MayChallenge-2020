// Time Complexity : O(N)
// Space Complexity : O(N)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void f(TreeNode* root , vector<int> &pos){
        if(!root)
            return;
        f(root->left , pos );
        pos.push_back(root->val);
        f(root->right , pos );
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> pos;
        f(root , pos);
        return pos[k-1];
    }
};
