class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> row(grid.size(), 0) ;
        vector<int> col(grid.size(), 0) ;
        int ans = 0 ;
        int temp ;
        for(int i = 0 ; i < grid.size() ; i++)
            for(int j = 0 ; j < grid.size() ; j++)
            {
                row[i] = max(row[i] , grid[i][j]) ;
                col[j] = max(col[j] , grid[i][j]) ;
            }
        /*for(int i = 0 ; i < row.size() ; i++ )
            cout << row[i] ;
        for(int j = 0 ; j < col.size() ; j++)
            cout << col[j] ;*/
        
        for(int i = 0 ; i < grid.size() ; i++)
            for(int j = 0 ; j < grid.size() ; j++)
            {
                temp = min(row[i] , col[j]) ;
                if(grid[i][j] <= temp)
                    ans = ans + temp - grid[i][j] ;
            }
        
        return ans ;
    }
};
