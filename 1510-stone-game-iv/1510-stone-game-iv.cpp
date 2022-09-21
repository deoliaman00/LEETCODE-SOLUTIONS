class Solution {
public:
    int f(int n,vector<int>&dp)
    {
        if(n==0)return 0;//b too......
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        for(int i=1;i*i<=n;i++)
        {
            if(f(n-i*i,dp)==0)
            {
                return dp[n]=1;
            }
          // return false;
        }
       return dp[n]=0;
    }
    bool winnerSquareGame(int n)
    {
        vector<int>dp(n+1,-1);
        if(f(n,dp)==1)return true;
        else return false;
       
        
    }
    
};