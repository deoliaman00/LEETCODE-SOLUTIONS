class Solution {
public:
    int func(int indx,int amt,vector<int>& coins,vector<vector<int>>&dp)
    {
        if(indx==0)
        {
            if(amt%coins[indx]==0)return 1;
            else return 0;
        }
        if(dp[indx][amt]!=-1)return dp[indx][amt];
        
        int nt=func(indx-1,amt,coins,dp);
        int take=0;
        if(coins[indx]<=amt)
        {
            take=func(indx,amt-coins[indx],coins,dp);
        }
        return dp[indx][amt]=(nt+take);
    }
    int change(int amount, vector<int>& coins) 
    {
        
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=func(n-1,amount,coins,dp);
        if(ans!=0)return ans;
        else
            return 0;
    }
};