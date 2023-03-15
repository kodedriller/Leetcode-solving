// 130. Surrounded Regions

class Solution{
    public:
    void solve(vector<vector<char>>& board){
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            dfs(board, i, 0);
            dfs(board, i, n-1);
        }
        for(int j=0;j<n;j++){
            dfs(board, 0, j);
            dfs(board, m-1, j);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O') board[i][j]='X';
                if(board[i][j]=='V') board[i][j]='O';
            }
        }
    }
    private:
    void dfs(vector<vector<char>>& board, int i, int j){
        if(i<0||i>=board.size()||j<0||j>=board[0].size()) return;
        if(board[i][j]=='X' || board[i][j]=='V')return;
        board[i][j]='V';
           dfs(board, i-1, j);
        dfs(board, i+1, j);
        dfs(board, i, j-1);
        dfs(board, i, j+1);
    }
};