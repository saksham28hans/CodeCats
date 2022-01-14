class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size(),cnt = 0,max = 0;
        vector<int> col(n);
        for(int i =0;i<grid.size();i++)
        { max =0;
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j] !=0)
                    cnt++;
                if(grid[i][j] >max)
                   max = grid[i][j];
                    
                if(grid[i][j] > col[j])
                    col[j] = grid[i][j];
                    
            }
            cnt += max;
        }
        for(int k=0;k<n;k++)
            cnt += col[k];
        return cnt;
    }
};