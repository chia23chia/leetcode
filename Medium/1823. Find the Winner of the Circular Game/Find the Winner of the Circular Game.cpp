class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> ans ;
        for(int i = 1 ; i <=n ; i++)
            ans.push_back(i) ;
        int tmp = 0 ;
        while(ans.size() > 1)
        {
            tmp = (tmp + k - 1) % ans.size() ;
            ans.erase(ans.begin() + tmp) ;
        }
        return ans[0] ;
    }
};
