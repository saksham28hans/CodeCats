class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int rot = 3;
        if(mat == target)
            return true;
       while(rot--)
       {
           for(int i=0;i<mat.size();i++)
           {
               for(int j=i;j<mat.size();j++)
                   swap(mat[i][j],mat[j][i]);
           }
           
           for(int i =0;i<mat.size();i++)
               reverse(mat[i].begin(),mat[i].end());
           if(mat == target)
               return true;
       }
        return false;
    }
};