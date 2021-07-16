class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> box(boxes.size());
	    vector<int> ans(box.size()) ;
	    for (int i = 0; i < box.size(); i++)
	    	if (boxes[i] == '1')
	    		box[i] = 1;
    		else box[i] = 0;

    	for(int i = 0 ; i < box.size() ; i++)
    		for (int j = 0; j < box.size(); j++)
    		{
    			if (box[j] == 1)
	    		{
	    			ans[i] = ans[i] + abs(i - j);
	    		}
	    	}
    	for (int i = 0; i < ans.size(); i++)
    		cout << ans[i];

    	return ans;
    }
};
