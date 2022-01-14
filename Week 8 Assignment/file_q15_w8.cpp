class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int k= original.size();
        vector<vector<int>> res(m);
        int cnt = 0,j=0;
        if(k  != (m*n))
        {
         res.clear();
         return res;
        }
        else
        {
            for(int i=0;i<k;i++)
            {
                res[j].push_back(original[i]);
                cnt++;
                if(cnt == n)
                {
                    j++;
                    cnt=0;
                }
            }
        }
        return res;
    }
};