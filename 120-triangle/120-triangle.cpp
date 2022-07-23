class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle)
    {
       int n=triangle.size();
        vector<int>first(n,0);
        for(int j=0;j<n;j++)
        {
            first[j]=triangle[n-1][j];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            vector<int>ctt(n,0);
            for(int j=i;j>=0;j--)
            {
                int down=triangle[i][j]+first[j];
                int up=triangle[i][j]+first[j+1];
                
                ctt[j]=min(down,up);
            }
            first=ctt;
        }
        
        return first[0];
        
    }
};

/*
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
        vector<int>frontdp(n,0);
        
        for(int j=0;j<n;j++)
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
*/
    