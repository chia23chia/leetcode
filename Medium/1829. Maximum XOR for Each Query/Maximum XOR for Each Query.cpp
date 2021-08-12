class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans(nums.size()) ;
        int k = pow(2 , maximumBit) - 1 ;
        int tmp = 0 ;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++)
        {
            tmp = tmp ^ nums[i] ;
            ans[n - i - 1] = tmp ^ k ;
        }
        return ans ;
    }
};
