class Solution {
public:
    int find(int i,int j,int n,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        if(i==n-1)return grid[i][j];
        
        if(dp[i][j]!=-1)return dp[i][j];
       // if(i>n || j<)
        int down=grid[i][j]+find(i+1,j,n,grid,dp);
        int diag=grid[i][j]+find(i+1,j+1,n,grid,dp);
        
        return dp[i][j]=min(down,diag);
    }
    int minimumTotal(vector<vector<int>>&grid)
    {
        int n=grid.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=find(0,0,n,grid,dp);
        return ans;
    }
};