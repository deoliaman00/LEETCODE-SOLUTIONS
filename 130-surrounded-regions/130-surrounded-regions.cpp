class Solution {
public:      
void solve(vector<vector<char>>& board) {
    int n=board.size();
    int m=board[0].size();        
    
    // calling dfs function only for border cells
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((i==0 || j==0 || i==n-1 || j==m-1) && board[i][j]=='O')
                dfs(board,i,j);
        }
    }
    
    // changing the values
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(board[i][j]=='O')
                board[i][j]='X';
            if(board[i][j]=='#')
                board[i][j]='O';
        }            
     }  
  }

void dfs(vector<vector<char>>& board,int i,int j)
{
    int n=board.size();
    int m=board[0].size();
    
    // base cases
    if(i<0 || j<0 || i>=n || j>=m || board[i][j]!='O')
        return;
    
    // marking the cell as visited by assigning '#'
    board[i][j]='#';
    
    // calling dfs function for valid directions
     dfs(board,i-1,j);
     dfs(board,i+1,j);
     dfs(board,i,j-1);
     dfs(board,i,j+1);
    }       
};