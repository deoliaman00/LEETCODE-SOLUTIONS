//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  void dfs(vector<vector<char>>&grid,int i,int j,vector<vector<int>>&vis,int m,int n)
    {
         vis[i][j]=1;
        queue<pair<int,int>>qt;
        qt.push(make_pair(i,j));
        while(!qt.empty())
        {
            i=qt.front().first;
            j=qt.front().second;
            qt.pop();
        
            for(int row=-1;row<=1;row++)
            {
                for(int col=-1;col<=1;col++)
                {
                    int nrow=row+i;
                    int ncol=col+j;
                    if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]=='1' && !vis[nrow][ncol])
                    {
                        vis[nrow][ncol]=1;
                        qt.push(make_pair(nrow,ncol));
                    }
                }
            }
        }
                
    }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(); //row size
        int n=grid[0].size(); //column size
        int c=0;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1' && !vis[i][j])// all those islands that has not been touched is marked here
                {
                    c++;
                    dfs(grid,i,j,vis,m,n);
                }
            
            }
        }
        
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends