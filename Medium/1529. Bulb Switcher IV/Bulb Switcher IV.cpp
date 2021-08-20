class Solution {
public:
    int minFlips(string target) {
        int ans = 0 ;
        char tmp = '0' ;
        for(int i = 0 ; i < target.length() ; i++)
        {
            if(target[i] == tmp)
                continue ;
            else 
            {
                ans++ ;
                if(target[i] == '1')
                    tmp = '1' ;
                else
                    tmp = '0' ;
            }
        }
        return ans ;
    }
};
