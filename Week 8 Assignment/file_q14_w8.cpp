class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix[0].size());
        int k=0;
        //res = matrix;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                res[k].push_back(matrix[i][j]);
                k++;
                if(k == matrix[0].size())
                    k = 0;
            }
        }
        return res;
    }
};