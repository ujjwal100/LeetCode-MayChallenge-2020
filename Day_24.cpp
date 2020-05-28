//Time Complexity : O(NlogN)
//Space complexity : O(N)
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *head=NULL , *p=NULL , *x;
        if(preorder.empty())
            return head;
        head= new TreeNode(preorder[0]);
        for(int i=1;i<preorder.size();i++){
            p= new TreeNode(preorder[i]);
            x=head;
            while(1){
                if(p->val > x->val){
                   if(!x->right){
                       x->right=p;
                       break;
                   }
                    else
                        x=x->right;
                }
                else{
                    if(!x->left){
                        x->left=p;
                        break;
                    }
                    else
                        x=x->left;
                }
            }
        }
        return head;
    }
};
