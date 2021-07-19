class Solution {
public:
    int subtractProductAndSum(int n) {
    int ans;
    int ten;
    int k;
    int add = 0;
    int pro = 1;
    for (int i = 5; i >= 0; i--)
    {
        k = n / pow(10, i);
        //cout << k << i << endl ;
        if (k != 0)
        {
            ten = i;
            break;
        }
    }
    //vector<int> num(ten+1) ;
    for (int i = ten; i >= 0; i--)
    {
        k = n / pow(10, i);
        //cout << k << endl;
        add = add + k;
        pro = pro * k;
        //num[i] = k ;
        //cout << num[i] << " " ;
        n = n - k * pow(10, i);
        //cout << n << endl;
    }
    ans = pro - add;
    return ans;
    }
};
