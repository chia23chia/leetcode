class Solution {
public:
    string interpret(string command) {
        string ans ;
        for(int i = 0 ; i < command.size() ; i++)
        {
            if(command[i] == 'G')
                ans = ans + 'G' ;
            else if(command[i] == '(')
            {
                if(command[i+1] == ')')
                {
                    ans = ans + 'o' ;
                    i = i + 1 ;
                }
                else
                {
                    ans = ans + "al" ;
                    i = i + 2 ;
                }
            }
            //else continue ;
        }
        return ans ;
    }
};
