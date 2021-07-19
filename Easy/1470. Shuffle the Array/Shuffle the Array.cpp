class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size()) ;
        int k = nums.size() / n ; //k = 2 
        for(int i = 0 ; i < n ; i++) // 3次
            for(int j = 0 ; j < k ; j++) //2次
                ans[(k*i)+j] = nums[i + (j * n)] ;
        return ans ;
    }
};
