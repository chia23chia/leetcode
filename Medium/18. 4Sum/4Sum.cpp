class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans ;
        vector<int> at ;
        sort(nums.begin(), nums.end()) ;
        
        int l , r , temp , lr;
        for(int i = 0 ; i < nums.size() ; i++)
            for(int j = i+1 ; j < nums.size() ; j++)
            {
                l = j + 1;
                r = nums.size() - 1 ;
                temp = target - nums[i] - nums[j] ;
                
                while(l < r)
                {
                    lr = nums[l] + nums[r] ;
                    if(lr == temp)
                    {
                        at = {nums[i] , nums[j] , nums[l] , nums[r]} ;
                        if(find(ans.begin() , ans.end() , at) == ans.end())
                            ans.push_back(at) ;
                        l++ ; r-- ;
                    }
                    else if(lr < temp)
                        l++ ;
                    else if(lr > temp)
                        r-- ;
                }
            }
        return ans ;
    }
};
