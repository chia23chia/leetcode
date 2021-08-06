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
    vector<int> tmp ;
    void inorder(TreeNode* root){
        if(root == NULL)
            return ;
        inorder(root -> left) ;
        tmp.push_back(root -> val) ;
        inorder(root -> right) ;
    }
    TreeNode* build(vector<int> &tmp , int l , int r){
        if(l > r)
            return nullptr ;
        int m = l + (r - l) / 2 ;
        TreeNode* root = new TreeNode(tmp[m]) ;
        root -> left = build(tmp , l , m - 1) ;
        root -> right = build(tmp , m + 1 , r) ;
        return root ;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        TreeNode* ans ;
        inorder(root) ;
        ans = build(tmp , 0 , tmp.size() - 1) ;
        return ans ;
    }
};
