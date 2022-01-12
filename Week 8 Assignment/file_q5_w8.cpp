class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int> b)
    {
        if(a.second == b.second)
            return (a.first < b.first);
        else
            return (a.second < b.second);
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> store;
        vector<int> res;
        int cnt = 0;
        for(int i= 0;i<mat.size();i++)
        {
            cnt=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j] == 1)
                    cnt++;
                else
                    break;
            }
            store.push_back(make_pair(i,cnt));
        }
        sort(store.begin(),store.end(),cmp);
        for(int i=0;i<k;i++)
        {
            res.push_back(store[i].first);
        }
        return res;
        
    }
};