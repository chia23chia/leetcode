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
    void fun(TreeNode* r , vector<int>& ans)
    {
        if(r == NULL)
            return ;
        else
        {
            ans.push_back(r -> val) ;
            fun(r -> left , ans) ;
            fun(r -> right , ans) ;
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans ;
        fun(root1 , ans) ;
        fun(root2 , ans) ;
        sort(ans.begin() , ans.end()) ;
        return ans ;
    }
};
