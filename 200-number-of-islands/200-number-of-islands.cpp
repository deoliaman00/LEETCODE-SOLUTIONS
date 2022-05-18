class Solution {
public:
    void dfs(vector<vector<char>>&grid,int i,int j,int m,int n)
    {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]!='1')
        {
            return;
        }
        
        grid[i][j]='2';
        
        dfs(grid,i+1,j,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j-1,m,n);
                
    }
    int numIslands(vector<vector<char>>& grid)
    {
        int m=grid.size(); //row size
        int n=grid[0].size(); //column size
        int c=0;
        for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    c++;
                    dfs(grid,i,j,m,n);
                              }
            }
        }
        return c;
    }
};

