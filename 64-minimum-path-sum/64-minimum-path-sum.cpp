class Solution {
public:
    int func(int m,int n,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
       
        if(m==0 && n==0)return grid[0][0];
        
        if(m<0|| n<0 )return 1001;
         if(dp[m][n]!=-1)return dp[m][n];
        int up=grid[m][n]+func(m-1,n,grid,dp);
        int low=grid[m][n]+func(m,n-1,grid,dp);
        
        
        return dp[m][n]=min(up,low);
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int ans=func(m-1,n-1,grid,dp);
        
        return ans;
        
    }
};