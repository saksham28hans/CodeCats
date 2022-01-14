class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt =0;
        for(int i=0;i<mat.size();i++)
        {
            int one = 0,col=-1,row=-1;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j] ==1 && one ==0)
                {
                    row =i;
                    col = j;
                    one++;
                }
                else if(mat[i][j] ==1 && one !=0)
                {
                    one++;
                    break;
                }
            }
            if(one == 1)
            {
                bool flag1 = true;
                for(int k=0;k<mat.size();k++)
                {
                    if(mat[k][col] == 1)
                    {
                        if(k != row)
                        flag1 =false;
                    }
                }
                if(flag1)
                    cnt++;
            }
        }
        return cnt;
    }
};