class Solution {
public:
    int f(int indx,int buy,vector<int>& prices,int N,vector<vector<int>>&dp)
    {
        if(indx>=N)return 0; // here we can see the index gets exceeded the limit because we are moving by 2 
        int op1=0,op2=0,profit=0;
        
        if(dp[indx][buy]!=-1)return dp[indx][buy];
        if(buy==0)// we need to buy
        {
            op1=0+f(indx+1,0,prices,N,dp);
             op2=-prices[indx]+f(indx+1,1,prices,N,dp);
            profit=max(op1,op2);
        }
        if(buy==1)
        {
            op1=0+f(indx+1,1,prices,N,dp);
            op2=prices[indx]+f(indx+2,0,prices,N,dp);
            profit=max(op1,op2);
        }
        
        return dp[indx][buy]=profit;
    }
    
    
    int maxProfit(vector<int>& prices) 
    {
        int N=prices.size();
        
        vector<vector<int>>dp(N,vector<int>(2,-1));
        int ans=f(0,0,prices,N,dp);
        return ans;
    }
};