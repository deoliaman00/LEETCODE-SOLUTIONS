class Solution {
public:
    
   // METHOD 1 AND 2 RECURSION AND MEMOIZATION
        
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
        vector<vector<int>>dp(n,vector<int>(n,0));
    //     int ans=find(0,0,n,grid,dp);
    //     return ans;
        
       // int i=n-1;
        
        for(int j=0;j<n;j++)
        {
            dp[n-1][j]=grid[n-1][j];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int down=grid[i][j]+dp[i+1][j];
                 int diag=grid[i][j]+dp[i+1][j+1];
        
                dp[i][j]=min(down,diag);
            }
        }
        
        
        return dp[0][0];
    }
        
        
};