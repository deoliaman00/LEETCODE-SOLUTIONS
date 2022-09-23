class Solution 
{
public:
    vector<int>indx={-1,0,1};
    int f(int i1,int j1,int j2,vector<vector<int>>& grid,vector<vector<vector<int>>>&dp)
    {
        int m=grid.size();
        int n=grid[i1].size();
        
        if(i1>=m || i1<0 || j1>=n || j2>=n || j1<0 || j2<0)return 0;
        if(dp[i1][j1][j2]!=-1)return dp[i1][j1][j2];
        if(i1==m-1)
        {
            if(j1==j2)
            {
                return dp[i1][j1][j2]=grid[i1][j1];
            }
            else
            {
                return dp[i1][j1][j2]=grid[i1][j1]+grid[i1][j2];
            }
        }
        
        int maxi=INT_MIN;
        for(auto k:indx)
        {
            for(auto d:indx)
            {
                    if(j1==j2)
                    {
                         maxi=max(maxi,grid[i1][j1]+f(i1+1,j1+k,j2+d,grid,dp));
                    }
                    else
                    {
                        maxi=max(maxi,grid[i1][j1]+grid[i1][j2]+f(i1+1,j1+k,j2+d,grid,dp));
                    }
            }
        }
        return dp[i1][j1][j2]=maxi;
    }
    
    
    int cherryPickup(vector<vector<int>>& grid) 
    {
        // the robot rows keep moving 
        // the robot colums keep moving 
        // the robot on right end also keeps its column moving
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<vector<int>>>dp(72,vector<vector<int>>(72,vector<int>(72,-1)));
        
        int ans=f(0,0,n-1,grid,dp);
        return ans;
        
    }
};