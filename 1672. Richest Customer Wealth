class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp;
        int ans = 0 ;
        //ans = accounts.size() ;
        for(int i = 0 ; i < accounts.size() ; i++)
        {
            temp = 0 ;
            for(int j = 0 ; j < accounts[i].size() ; j++)
            {
                temp = temp + accounts[i][j] ;
                if(temp >= ans)
                    ans = temp ;
            }
        }
            
        return ans ;
    }
};
