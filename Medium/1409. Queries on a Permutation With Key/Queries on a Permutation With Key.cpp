class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans ;
        vector<int> p ;
        int tmp1 , tmp2 ;
        for(int i = 1 ; i <= m ; i++)
            p.push_back(i) ;
        for(int i = 0 ; i < queries.size() ; i++)
        {
            for(int j = 0 ; j < p.size() ; j++)
            {
                tmp1 = queries[i] ;
                if(p[j] == queries[i])
                {
                    tmp2 = j ;
                    break ;
                }
            }
            ans.push_back(tmp2) ;
            p.erase(p.begin()+tmp2) ;
            p.insert(p.begin(),tmp1) ;
        }
        return ans ;
    }
};
