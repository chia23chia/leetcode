class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
    vector<int> ans(k, 0);
    sort(logs.begin(), logs.end());
    int tmp;
    int tmp2;
    int count;
    for (int i = 0; i < logs.size();i++)
    {
        count = 1;
        tmp = logs[i][0];
        tmp2 = logs[i][1];
        for (int j = i; j < logs.size(); j++)
        {
            if (logs[j][0] == tmp && logs[j][1] != tmp2)
            {
                count++;
                tmp2 = logs[j][1];
            }
            else if (logs[j][0] != tmp)
            {
                i = j-1;
                break;
            }
        }
        ans[count - 1] ++;
        if (logs[i + 1][0] == tmp)
            break;
    }
        return ans ;
    }
};
