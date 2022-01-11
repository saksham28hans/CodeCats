class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int count=0,col =0;
        for(int i=n-1;i>=0;i--)
        {
            int m = grid[i].size();
            for(int j=m-1; j>=col;j--)
            {
                if(grid[i][j] < 0)
                    count++;
                else
                {
                    col = j+1;
                    break;
                }
            }
        }
        return count;
    }
};