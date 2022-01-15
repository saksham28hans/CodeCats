class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
    int n= matrix.size();
     vector<int> rows(n+1,0);
     vector<int> cols(n+1,0);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                
                rows[matrix[i][j]]++;
                cols[matrix[j][i]]++;
            }
            for(int k=1;k<rows.size();k++)
            {
                if(rows[k] == 0 || cols[k] ==0)
                    return false;
                else
                {
                    rows[k] = 0;
                    cols[k] = 0;
                }
            }
        }
        return true;
   }
};