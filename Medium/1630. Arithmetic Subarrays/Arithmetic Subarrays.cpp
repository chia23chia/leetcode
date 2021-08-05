class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans(l.size() , true);
        int n ;
        for(int i = 0 ; i < l.size() ; i++)
        {
            vector<int> tmp ;
            for(int j = l[i] ; j <= r[i] ; j++)
                tmp.push_back(nums[j]) ;
            sort(tmp.begin() , tmp.end()) ;
            n = tmp[1] - tmp[0] ;
            for(int j = 0 ; j < tmp.size() - 1 ; j++)
                if(tmp[j+1] - tmp[j] != n)
                    ans[i] = false ;
        }
        return ans ;
    }
};
