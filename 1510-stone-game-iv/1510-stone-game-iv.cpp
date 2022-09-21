class Solution {
public:
    vector<int>dp;
    bool winnerSquareGame(int n) {
        
        //0->False
        //1->true
        dp.resize(n+1,-1);
       return fnc(n,dp);
    }
    
    int fnc(int n,vector<int>&dp)
    {
         if(n==0)return 0;
         if(dp[n]!=-1)return dp[n];
        for(int i=1;i*i<=n;i++)
        {   //n = 6
            if(fnc(n-i*i,dp)==0)
                return dp[n]=1;
        }
        
        return dp[n]=0;
        
    }};
    /*
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
        vector<int>dp(n+1,false);
        int ans=f(n,dp);
        if(ans==1)return true;
        else return false;
        
    }
    */