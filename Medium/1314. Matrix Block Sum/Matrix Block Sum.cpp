class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int sum = 0 ;
        int m = mat.size() ;
        int n = mat[0].size() ;
        vector<vector<int>> ans(m , vector<int>(n)) ;
        
        for(int i = 0 ; i < m ; i++)
        {
            sum = sum + mat[i][0] ;
            mat[i][0] = sum ;
        }
        sum = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            sum = sum + mat[0][i] ;
            mat[0][i] = sum ;
        }
        
        for(int i = 1 ; i < m ; i++)
            for(int j = 1 ; j < n ; j++)
            {
                mat[i][j] += mat[i-1][j] + mat[i][j-1] - mat[i-1][j-1] ;
            }
        
        for(int i = 0 ; i < m ; i++)
            for(int j = 0 ; j < n ;j++)
            {
                int l = j - k ;
                int r = j + k ;
                int b = i - k ;
                int t = i + k ;
                
                sum = 0 ;
                if(l - 1 >= 0 && b - 1 >= 0)
                    sum += mat[b - 1][l - 1] ;
                
                if(b - 1 >= 0)
                {
                    if(r < n) 
                        sum -= mat[b - 1][r];
                    else  
                        sum -= mat[b - 1][n - 1];
                }
                
                if(l - 1 >= 0)
                {
                    if(t < m)
                        sum -= mat[t][l - 1];
                    else 
                        sum -= mat[m - 1][l - 1];
                }
                
                if(r < n && t < m) 
                    sum += mat[t][r];
                else if(r < n)
                    sum += mat[m - 1][r];
                else if(t < m)
                    sum += mat[t][n - 1];
                else                   
                    sum += mat[m - 1][n - 1];
                
                ans[i][j] = sum;
                
            }
        
        return ans ;
    }
};
