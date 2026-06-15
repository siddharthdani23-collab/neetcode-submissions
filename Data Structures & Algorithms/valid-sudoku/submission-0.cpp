class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         for(int i = 0; i < 9; i++)
         {
            vector<bool> seen(10,false);
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j]=='.') continue;
                int val=board[i][j]-'0';
                if(seen[val]) return false;
                seen[val]=true;
            }
         }
         for(int i = 0; i < 9; i++)
         {
            vector<bool> seen(10,false);
            for(int j = 0; j < 9; j++)
            {
                if(board[j][i]=='.') continue;
                int val=board[j][i]-'0';
                if(seen[val]) return false;
                seen[val]=true;
            }
         }
         for(int i=0;i<9;i++)
         {
            vector<bool> seen(10,false);
            for(int j=0;j<3;j++)
            {

                for(int k=0;k<3;k++)
                {
                    int row=(i/3)*3+j;
                    int col=(i%3)*3+k;
                    if(board[row][col]=='.') continue;
                    int val=board[row][col]-'0';
                    if(seen[val]) return false;
                    seen[val]=true;
                }
            }
        }
         return true;
}
};