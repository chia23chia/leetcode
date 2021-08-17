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
private:
    int ans = 1 ;
    void fun(TreeNode* root , int tmp){
        if(root == NULL)
            return ;
        if(root->val >= tmp)
        {
            ans++ ;
            tmp = root->val ;
        }
        fun(root->left , tmp) ;
        fun(root->right , tmp) ;
    }
public:
    int goodNodes(TreeNode* root) {
        int tmp = root->val;
        fun(root->left , tmp) ;
        fun(root->right , tmp) ;
        
        return ans ;
    }
};
