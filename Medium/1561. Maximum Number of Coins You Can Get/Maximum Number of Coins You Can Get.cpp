class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0 ;
        sort(piles.begin() , piles.end()) ;
        int n = piles.size() / 3 ;
        for(int i = n ; i < piles.size() ; i+=2)
            ans += piles[i] ;
        return ans ;
    }
};
