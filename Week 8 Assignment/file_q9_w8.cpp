class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int r,c,cnt=0;
        for(int i= 0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j] == 'R')
                {
                    r=i;
                    c=j;
                    break;
                }
            }
        }
        for(int i =r;i>=0;i--)
        {
            if(board[i][c] == 'p')
            {
                cnt++;
                break;
            }
            if(board[i][c] == 'B')
            {
                break;
            }
        }
        
        for(int i =r;i<8;i++)
        {
            if(board[i][c] == 'p')
            {
                cnt++;
                break;
            }
            if(board[i][c] == 'B')
            {
                break;
            }
        }
        for(int i =c;i>=0;i--)
        {
            if(board[r][i] == 'p')
            {
                cnt++;
                break;
            }
            if(board[r][i] == 'B')
            {
                break;
            }
        }
        for(int i =c;i<8;i++)
        {
            if(board[r][i] == 'p')
            {
                cnt++;
                break;
            }
            if(board[r][i] == 'B')
            {
                break;
            }
        }
        return cnt;
    }
};