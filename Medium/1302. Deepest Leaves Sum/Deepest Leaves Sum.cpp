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
    int deepestLeavesSum(TreeNode* root) {
        int ans = 0 ;
        queue<TreeNode*> que({root}) ;
        while(!que.empty()){
            ans = 0 ;
            int level_size = que.size();
            for(int i = 0 ; i < level_size ; i++)
            {
                TreeNode* temp = que.front() ;
                que.pop() ;
                ans = ans + temp -> val ;
                if(temp -> left) 
                    que.push(temp -> left) ;
                if(temp -> right)
                    que.push(temp -> right) ;
            }
        }
        return ans ;
    }
};
