class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> tmp ;
        int ans = 0 ;
        for(int i = 0 ; i < points.size() ; i++)
            tmp.push_back(points[i][0]);
        sort(tmp.begin(),tmp.end()) ;
        for(int i = 0 ; i < tmp.size()-1 ; i++)
            ans = max(ans,tmp[i+1]-tmp[i]) ;
        
        return ans ;
    }
};
