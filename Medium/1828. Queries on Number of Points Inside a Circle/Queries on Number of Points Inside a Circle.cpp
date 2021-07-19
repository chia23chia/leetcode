class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans (queries.size()) ;
        int temp = 0 ;
        for(int i = 0 ; i < queries.size() ; i++)
        {
            for(int j = 0 ; j < queries[i].size() ; j++)
            {
                for(int k = 0 ; k < points.size() ; k++)
                {
                    int x = points[k][0]-queries[i][0] ;
                    int y = points[k][1]-queries[i][1] ;
                    if(sqrt(pow(x,2)+pow(y,2)) <= queries[i][2])
                      temp ++ ;
                }
                ans[i] = temp ;
                temp = 0 ;
            }
        }
        return ans ;
    }
};
