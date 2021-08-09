class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0 ;
        int n = 0 ;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '(' && i == 0)
                n++ ;
            else if(s[i] == '(' && s[i-1] == ')')
            {
                if(n < 0)
                {
                    ans += abs(n) ;
                    n = 0 ;
                    n++ ;
                }
                else
                    n++ ;
            }
            else if(s[i] == '(')
                n++ ;
            else
                n-- ;
        }
        ans += abs(n) ;
        return ans ;
    }
};
