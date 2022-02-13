class Solution {
public:
    int area_sub(vector<vector<int>>& grid,int sr,int sc)
    {
        int ar = 0;
        ar++;
        grid[sr][sc] = 2;
        if((sr-1) >=0 && grid[sr-1][sc] == 1)
             ar += area_sub(grid,sr-1,sc);
          if((sc-1) >=0 && grid[sr][sc-1] == 1)
             ar += area_sub(grid,sr,sc-1);
         if((sr+1) < grid.size() && grid[sr+1][sc] == 1)
             ar += area_sub(grid,sr+1,sc);
          if((sc+1) < grid[0].size() && grid[sr][sc+1] == 1)
             ar += area_sub(grid,sr,sc+1);
        return ar;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max1 =0,ar=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 1)
                    ar = area_sub(grid,i,j);
                if(max1 < ar)
                    max1 = ar;
                ar = 0;
            }
        }
        return max1;
    }
};