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
    void build(TreeNode* ans , int n){
        if(n < ans->val)
        {
            if(ans->left == NULL)
                ans->left = new TreeNode(n) ;
            else
                build(ans->left , n) ;
        }
        else if(n > ans->val)
        {
            if(ans->right == NULL)
                ans->right = new TreeNode(n) ;
            else
                build(ans->right , n ) ;
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* ans = new TreeNode(preorder[0]) ;
        for(int i = 1 ; i < preorder.size() ; i++)
            build(ans , preorder[i]) ;
        return ans ;
    }
};
