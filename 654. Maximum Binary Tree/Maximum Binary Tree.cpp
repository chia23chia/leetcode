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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.empty()) return NULL ;
        int mx = INT_MIN ;
        int tmp ;
        for(int i = 0 ; i < nums.size() ; i++)
            if(nums[i] > mx)
            {
                mx = nums[i] ;
                tmp = i ;
            }
        TreeNode* ans = new TreeNode(mx) ;
        vector<int> larr = vector<int>(nums.begin() , nums.begin()+tmp) ;
        vector<int> rarr = vector<int>(nums.begin()+tmp+1 , nums.end()) ;

        ans->left = constructMaximumBinaryTree(larr) ;
        ans->right = constructMaximumBinaryTree(rarr) ;
        return ans ;
    }
};
