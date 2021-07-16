class Solution {
public:
    int maxDepth(string s) {
        int ans = 0 ;
        int t = 0 ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '(' )
            {
                t++ ;
                if(t >= ans)
                    ans = t ;
            }
            else if(s[i] == ')' )
                t-- ;
        }
        return ans ;
    }
};
