class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            int mask=0;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                int val=board[i][j]-'0';
                if(mask & (1<<val)) return false;
                mask |= (1<<val);
            }
        }
        for(int i=0;i<9;i++)
        {
            int mask=0;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.') continue;
                int val=board[j][i]-'0';
                if(mask & (1<<val)) return false;
                mask |= (1<<val);
            }
        }
        for(int i=0;i<9;i++)
        {
            int mask=0;
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    int row=(i/3)*3+j;
                    int col=(i%3)*3+k;
                    if(board[row][col]=='.') continue;
                    int val=board[row][col]-'0';
                    if(mask & (1<<val)) return false;
                    mask |= (1<<val);
                }
            }
        }
        return true;

    }
};
