class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans ;
        vector<int> tmp ;
        ans.push_back({}) ;
        sort(nums.begin() , nums.end()) ;
        for(int i = 0 ; i < nums.size() ;)
        {
            int count = 0 ;
            while(i + count < nums.size() && nums[i] == nums[i+count])
            {
                 count++ ;
            }
            int n = ans.size() ;
            for(int j = 0 ; j < n ; j++)
            {
                tmp= ans[j] ;
                for(int k = 0 ; k < count ; k++)
                {
                    tmp.push_back(nums[i]) ;
                    ans.push_back(tmp) ;
                }
            }
            i = i + count ;
        }
        return ans ;
    }
};
