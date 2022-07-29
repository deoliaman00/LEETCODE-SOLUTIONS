class Solution {
public:
    /*
    int func(int indx,int target,vector<int>coins,vector<vector<int>>&dp)
    {
        if(dp[indx][target]!=-1)return dp[indx][target];
        if(indx==0)
        {
            if(target%coins[0]==0)
                return target/coins[0];
            else
                return 1e9;
        }
        
        
        int ntaken=0+func(indx-1,target,coins,dp);
        int take=1e9;
        if(coins[indx]<=target)
        {
            take=1+func(indx,target-coins[indx],coins,dp);
        }
        
        return dp[indx][target]=min(ntaken,take);
    }
    */
    
    int coinChange(vector<int>& coins, int amount)
    {
        int n=coins.size();
       // vector<vector<int>>dp(n,vector<int>(amount+1,-1));----> memoization array of dp
        vector<vector<int>>dp(n,vector<int>(amount+1,0));
        
        //int res= func(n-1,amount,coins,dp);
        //if(res>=1e9)return -1;
        //else
          //  return res;

        for(int i=0;i<=amount;i++)
        {
            if(i%coins[0]==0)
            {
                dp[0][i]=i/coins[0];
            }else{
                dp[0][i]=1e9;
            }
        }
        for(int indx=1;indx<n;indx++)
        {
            for(int tar=0;tar<=amount;tar++)
            {
                    
                int ntaken=0+dp[indx-1][tar];
                int take=1e9;
                if(coins[indx]<=tar)
                {
                     take=1+dp[indx][tar-coins[indx]];
                }
        
            dp[indx][tar]=min(ntaken,take);
            }
        }
    
    int a=dp[n-1][amount];
        if(a>=1e9)
        {
            return -1;
        }else
        {
            return dp[n-1][amount];
        }
    }
};