class Solution {
private:
    void fun(vector<int> &tmp , int &ans){
        for(int i = 0 ; i < 26 ; i++)
        {
            if(tmp[i] == 0)
                continue ;
            ans++ ;
            tmp[i]-- ;
            fun(tmp , ans);
            tmp[i]++ ;
        }
    }
public:
    int numTilePossibilities(string tiles) {
        int ans = 0 ;
        vector<int> tmp(26 , 0) ;
        for(int i = 0 ; i < tiles.length() ; i++)
            tmp[tiles[i] - 'A'] ++ ;
        fun(tmp , ans) ;
        return ans ;
    }
};
