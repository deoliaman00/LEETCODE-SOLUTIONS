class Solution {
public:
    int func(int i,int j,int t1,int t2,vector<vector<int>>&dp)
    {
        if(i<0 || i>t1|| j<0 || j>t2)return 0;
        if(i==t1 && j==t2)
        {
            return 1;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        
        int right=func(i,j+1,t1,t2,dp);
        int down=func(i+1,j,t1,t2,dp);
        return dp[i][j]=(right+down);
    }
    
    
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>>dp(m,vector<int>(n+1,-1));
        
        int ans=func(0,0,m-1,n-1,dp);
        
        return ans;
               
    }
};

// given as m x n grid
 
 