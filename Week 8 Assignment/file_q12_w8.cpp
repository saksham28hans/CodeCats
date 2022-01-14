class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
         vector<vector<int>> res;
        res = grid;
        int m = grid.size();
        int n = grid[0].size();
        k = k%(m*n);
       // cout<<k<<m<<n;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j+k > n-1)
                {
                    res[(i+((j+k)/n))%m][(j+k)%n] = grid[i][j];
                }
                else
                {
                    
                    res[i][j+k] = grid[i][j];
                }
            }
        }
        return res;
    }
};