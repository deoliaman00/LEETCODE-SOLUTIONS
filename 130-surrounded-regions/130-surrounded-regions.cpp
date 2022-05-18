class Solution {
public:
    void dfs(vector<vector<char>>& board,int i,int j)
    {
        
        int m=board.size();
        int n=board[0].size();
        
         if(i<0 || i>=m || j<0|| j>=n || board[i][j]!='O')
                return;
        
        board[i][j]='$';
        
        dfs(board,i+1,j);
     dfs(board,i,j+1);
     dfs(board,i-1,j);
     dfs(board,i,j-1);
        
    }
    void solve(vector<vector<char>>& board)
    {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i==0 || i==m-1 || j==0|| j==n-1)&&(board[i][j]=='O'))
                {
                    dfs(board,i,j);
                }
            }
        }
        
        
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='O')
                {
                    board[i][j]='X';
                }
                if(board[i][j]=='$')
                {
                    board[i][j]='O';
                    
                }
            }
        }
        
    }
};