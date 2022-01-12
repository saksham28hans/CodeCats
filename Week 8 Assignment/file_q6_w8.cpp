class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        for(int i=0;i<matrix.size();i++)
        {
            int min_j =0;
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][min_j] > matrix[i][j])
                    min_j =j;
            }
            bool flag1 = true;
            for(int k=0;k<matrix.size();k++)
            {
                if(matrix[i][min_j] < matrix[k][min_j])
                {
                 flag1 =false;
                 break;
                }
            }
            if(flag1 == true)
                res.push_back(matrix[i][min_j]);
        }
        return res;
    }
};