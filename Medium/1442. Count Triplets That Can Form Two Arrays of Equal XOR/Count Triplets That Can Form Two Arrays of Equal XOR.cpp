class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans = 0 ;
        int n = arr.size() ;
        int a , b ;
        for(int i = 0 ; i < n ; i++)
            for(int j = i + 1 ; j < n ; j++)
                for(int k = j ; k < n ; k++)
                {
                    a = 0 ;
                    b = 0 ;
                    for(int t = i ; t < j ; t++)
                        a = a ^ arr[t] ;
                    for(int t = j ; t <= k ; t++)
                        b = b ^ arr[t] ;
                    if(a == b)
                        ans++ ;
                }
        
        return ans ;
    }
};
