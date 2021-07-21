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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original == NULL)
            return NULL ;
        if(target == original)
            return cloned ;
        else
        {
            TreeNode* ans ;
            ans = getTargetCopy(original->left,cloned->left,target) ;
            if(ans == NULL) 
                ans = getTargetCopy(original->right,cloned->right,target) ;
            return ans ;
        }
        
    }
};
