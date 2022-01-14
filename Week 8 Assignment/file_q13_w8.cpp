class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> res(r);
        int m = mat.size();
        int n = mat[0].size();
        int cnt = 0,k=0;
        if((m*n) != (r*c))
            return mat;
        else
        {
            for(int i =0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    res[k].push_back(mat[i][j]);
                    cnt++;
                    if(cnt == c)
                    {
                        cnt = 0;
                        k++;
                    }
                }
            }
        }
        return res;
    }
};