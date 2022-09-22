class Solution {
public:
    vector<int> dirs = {-1,0,1};
    int dp[100][100][100];
    int backtrack(int i,int j1,int j2, vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        if(i<0 || i>=n || j1>=m || j2>=m || j1<0 || j2<0) {
            return 0;
        }
        
        if(i==n-1) {
            if(j1==j2) { // common case
                return grid[i][j1];
            } else {
                return grid[i][j1] + grid[i][j2];
            }
        }
        
        if(dp[i][j1][j2]!=-1) {
            return dp[i][j1][j2];
        }
            
        
        int maxi = INT_MIN;
        for(auto d1:dirs) {
            for(auto d2:dirs) {
                if(j1==j2) { // common case
                    maxi = max(maxi,grid[i][j1]+ backtrack(i+1,d1+j1,j2+d2,grid));
                   
                   
                } else {
                    maxi = max(maxi,grid[i][j1] + grid[i][j2]+ backtrack(i+1,d1+j1,j2+d2,grid));
                   
                   
                }
                
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid[0].size();
        memset(dp,-1,sizeof dp);
        return backtrack(0,0,m-1,grid);
    }
};