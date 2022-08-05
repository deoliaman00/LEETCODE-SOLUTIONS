class Solution {
public:
    int maxProfit(int k, vector<int>& prices)
    {
        int n=prices.size();
        int cap=2;
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0))); // 3d dp -> 2d dp 
        vector<vector<int>>after(2,vector<int>(k+1,0)),curr(2,vector<int>(k+1,0));
        
        for(int indx=n-1;indx>=0;indx--)
        {
            for(int buy=0;buy<2;buy++)
            {
                for(int cap=1;cap<k+1;cap++)
                {
                        int op1=0,op2=0,profit=0;
                        if(buy==0)// we are buying here
                        {
                            // op1> we buyed this stock now send 1 to sell it
                            // op2> we didnt buyed this stock now send 0 to buy again


                             op2=0+after[0][cap];
                            op1=-prices[indx]+after[1][cap];
                            profit=max(op1,op2);
                        }
                        if(buy==1)
                        {

                             op2=0+after[1][cap];
                             op1=prices[indx]+after[0][cap-1];
                            profit=max(op1,op2);
                        }
                    curr[buy][cap]=profit;
                }
            }
            after=curr;
        }
        
        return after[0][k];
        
    }
};

/*
class Solution {
public:
    int f(int indx,int buy,int cap,int n,vector<int>A,vector<vector<vector<int>>>&dp)
    {
        if(cap==0 || indx==n)return 0;
        
        
        if(dp[indx][buy][cap]!=-1)return dp[indx][buy][cap];
        int op1=0,op2=0,profit=0;
        if(buy==0)// we are buying here
        {
            // op1> we buyed this stock now send 1 to sell it
            // op2> we didnt buyed this stock now send 0 to buy again
            
             
             op2=0+f(indx+1,0,cap,n,A,dp);
            op1=-A[indx]+f(indx+1,1,cap,n,A,dp);
            profit=max(op1,op2);
            
        }
        if(buy==1)
        {
            
             op2=0+f(indx+1,1,cap,n,A,dp);
             op1=A[indx]+f(indx+1,0,cap-1,n,A,dp);
            profit=max(op1,op2);
        }
    
        
        return dp[indx][buy][cap]=max(op1,op2);
    }
    int maxProfit(vector<int>& prices) 
    {
        
    }
};
*/