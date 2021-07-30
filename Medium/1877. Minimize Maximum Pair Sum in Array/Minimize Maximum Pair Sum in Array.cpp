class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int ans = 0 ;
        vector<int> tmp ;
        for(int i = 0 ; i < nums.size()/2 ; i++)
            tmp.push_back(nums[i] + nums[nums.size() - i - 1]) ;
        for(int i = 0 ; i < tmp.size() ; i++)
            ans = max(ans , tmp[i]) ;
        return ans ;
    }
};
