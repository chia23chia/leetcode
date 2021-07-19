class Solution {
public:
    string defangIPaddr(string address) {
        int temp = 0 ;
        string ans ;
        for(int i = temp ; i < address.size() ; i++)
        {
            if(address[i] == '.')
            {
                for(int j = temp ; j < i ; j++)
                {
                    ans = ans + address[j] ;
                }
                ans = ans + "[.]" ;
                temp = i + 1 ;
            }
                
        }
        for(int i = temp ; i < address.size() ; i++)
        {
            ans = ans + address[i] ;
        }
            
        return ans ;
    }
};
