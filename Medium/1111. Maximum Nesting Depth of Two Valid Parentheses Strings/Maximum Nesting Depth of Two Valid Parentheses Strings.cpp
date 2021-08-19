class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans ;
        int tmp = 0 ;
        for(int i = 0 ; i < seq.length() ; i++)
        {
            if(seq[i] == '(')
            {
                tmp ++ ;
                if(tmp % 2 == 1)
                    ans.push_back(0) ;
                else
                    ans.push_back(1) ;
            }
            else
            {
                if(tmp %2 == 1)
                    ans.push_back(0) ;
                else
                    ans.push_back(1) ;
                tmp-- ;
            }
        }
        
        return ans ;
    }
};
