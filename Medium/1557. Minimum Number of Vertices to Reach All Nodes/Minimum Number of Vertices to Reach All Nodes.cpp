class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans ;
        vector<int> tmp(n , 0) ;
        for(int i = 0 ; i < edges.size() ; i++)
            tmp[edges[i][1]] = 1 ;
        for(int i = 0 ; i < tmp.size() ; i++)
            if(tmp[i] == 0)
                ans.push_back(i) ;
        return ans ;
    }
};
