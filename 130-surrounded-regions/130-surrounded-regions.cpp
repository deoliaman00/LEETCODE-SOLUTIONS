// class Solution {
// public:
//     void dfs(vector<vector<char>>& board,int i,int j,int m,int n)
//     {
//         if(i<0 || j<0 || i==m-1 || j==n-1 || i>=m || i<=n)
//         {
//             return;
//         }
//         board[i][j]='X';
//         dfs(board,i+1,j,m,n);
//         dfs(board,i,j+1,m,n);
//         dfs(board,i-1,j,m,n);
//         dfs(board,i,j-1,m,n);
        
//     }
//     void solve(vector<vector<char>>& board)
//     {
//         int m=board.size();
//         int n=board[0].size();
        
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(board[i][j]=='O')
//                 {
//                     dfs(board,i,j,m,n);
//                 }
//             }
//         }
        
//     }
// };

class Solution
{
    bool seen;
    void mark(vector<vector<char>>& board,int i,int j,int r,int c)
    {
        if(i<0 || i>r-1 || j<0 || j>c-1)
            return;
        if(board[i][j]=='X')
            return;
        
        board[i][j] = 'X';
        mark(board,i-1,j,r,c);
        mark(board,i+1,j,r,c);
        mark(board,i,j-1,r,c);
        mark(board,i,j+1,r,c);       
    }
    void dfs(vector<vector<char>>& board,int i,int j,int r,int c,vector<vector<bool>>& visited)
    {
        if(i<0 || i>r-1 || j<0 || j>c-1)
            return;
        
        if(board[i][j]=='X' || visited[i][j])
            return;
        if(i<=0 || i>=r-1 || j<=0 || j>=c-1)
            seen = true;
        
        visited[i][j] = true;
        dfs(board,i-1,j,r,c,visited);
        dfs(board,i+1,j,r,c,visited);
        dfs(board,i,j-1,r,c,visited);
        dfs(board,i,j+1,r,c,visited);
    }
public:
    void solve(vector<vector<char>>& board) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int r=board.size();
        if(r<=1)
            return;
        int c=board[0].size();
        if(c<=1)
            return;
        vector<vector<bool>> visited(r,vector<bool>(c,false));
        
        for(int i=1;i<r-1;++i)
        {
            for(int j=1;j<c-1;++j)
            {
                if(board[i][j]=='O' && !visited[i][j])
                {
                    seen = false;
                    dfs(board,i,j,r,c,visited);
                    if(seen==false)
                        mark(board,i,j,r,c);
                    seen = true;
                }
            }
        }
    }
};