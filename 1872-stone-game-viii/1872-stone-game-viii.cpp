class Solution {
public:
    int f(int indx,int turn,vector<int>&stones,vector<vector<int>>&dp)
    {
        if(indx==stones.size()-1)
        {
            if(turn==1)return stones[indx];// adding the  last score 
            else
                return -stones[indx];// subtracting the last score 
        }
        if(dp[indx][turn]!=-1)return dp[indx][turn];
        if(turn==1)
        {
            // keep taking more stones;
            int t1=f(indx+1,turn,stones,dp);
            int t2=stones[indx]+f(indx+1,!turn,stones,dp);
            return dp[indx][turn]=max(t1,t2);
        }
            int t1=f(indx+1,turn,stones,dp);
            int t2=-stones[indx]+f(indx+1,!turn,stones,dp);
            return dp[indx][turn]=min(t1,t2);        
    }
    
    
    int stoneGameVIII(vector<int>& stones)
    {
      int n=stones.size();
        int indx=1,turn=1;
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        for(int i=1;i<n;i++)
        {
            stones[i]=stones[i-1]+stones[i];
        }
        int ans=f(indx,turn,stones,dp);
        
        return ans;
    }
};