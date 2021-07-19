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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans ;
        ans = root ;
        while(1){
            cout << ans -> val ;
            if(ans -> val >= p -> val && ans -> val <= q -> val || ans -> val >= q -> val && ans -> val <= p -> val)
                break ;
            else if(ans -> val < p -> val && ans -> val < q -> val)
                ans = ans -> right ;
            else if(ans -> val > q -> val || ans -> val > p -> val)
                ans = ans -> left ;
            
        }
        
        return ans ;
    }
};
