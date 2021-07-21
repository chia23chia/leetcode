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
    int sum = 0;
public:
    void evensumgp(TreeNode* r){
        if(r->left != NULL)
            sum = sum + r->left->val ;
        if(r->right != NULL)
            sum = sum + r->right->val ;
    }
    void evensump(TreeNode* r){
        if(r->left != NULL)
            evensumgp(r->left) ;
        if(r->right != NULL)
            evensumgp(r->right) ;
    }
    int sumEvenGrandparent(TreeNode* root) {
        if(root->val % 2 == 0)
            evensump(root) ;
        if(root->left != NULL)
            sumEvenGrandparent(root->left) ;
        if(root->right != NULL)
            sumEvenGrandparent(root->right) ;
            
        return sum ;
    }
};
