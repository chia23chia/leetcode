class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> n(nums) ;
        for(int i = 0 ; i < nums.size() ; i++){
            n[i] = 0 ;
            for(int j = 0 ; j <= i ; j++)
            {
                n[i] = n[i] + nums[j] ;
            }
        }
        return n ;
    }
};
