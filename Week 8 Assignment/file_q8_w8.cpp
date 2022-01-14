class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int per =0;
        int n = grid.size();
        for(int i=0;i<grid.size();i++)
        {  int m = grid[i].size();
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j] == 1)
                {
                    if((i-1)>=0)
                    {
                        if(grid[i-1][j] == 0)
                            per++;
                    } 
                     else
                    {
                            per++;
                    }
                    
                    if((i+1)<n)
                    {
                        if(grid[i+1][j] == 0)
                            per++;
                    }
                    else
                    {
                        per++;
                    }
                    
                    if((j-1)>=0)
                    {
                        if(grid[i][j-1] == 0)
                            per++;
                    } 
                     else
                    {
                            per++;
                    }
                    
                    if((j+1)<m)
                    {
                        if(grid[i][j+1] == 0)
                            per++;
                        
                    }
                    else
                    {
                        cout<<n;
                        per++;
                    }
                }
              // cout<<per<<endl; 
            }
        }
        return per;
    }
};