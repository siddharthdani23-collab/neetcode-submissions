class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       unordered_map<int,unordered_set<char>> mpr,mpc;
       map<pair<int,int>,unordered_set<char>> mpbox;
       for(int i=0;i<9;i++)
       {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                if(mpr[i].count(board[i][j])||mpc[j].count(board[i][j]))
                return false;
                pair<int,int> key={i/3,j/3};
                if(mpbox[key].count(board[i][j])) return false;
                mpr[i].insert(board[i][j]);
                mpc[j].insert(board[i][j]);
                mpbox[key].insert(board[i][j]);
            }
       } 
       return true;
    }
};
