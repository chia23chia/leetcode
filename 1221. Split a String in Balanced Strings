class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0 ;
	    int r = 0;
	    int l = 0;
	    for (int i = 0; i < s.size(); i++)
	    {
		    if (s[i] == 'R')
			    r++;
		    else
			    l++;

    		if (r == l)
	    	{
		    	ans++;
    			r = 0;
	    		l = 0;
	    	}
	    }

	    //cout << ans;
	    return ans;
        
        }
};
