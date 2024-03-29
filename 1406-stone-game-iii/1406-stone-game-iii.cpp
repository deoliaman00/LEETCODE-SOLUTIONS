class Solution {
public:
    
    int f(int indx,int n,vector<int>&stone,vector<int>&dp)
    {
        if(indx>=n)return 0;
        if(dp[indx]!=-1)return dp[indx];
        else{
            int ans=INT_MIN;
            ans=max(ans,stone[indx]-f(indx+1,n,stone,dp));
            if(indx+1<n)
            {
                ans=max(ans,stone[indx]+stone[indx+1]-f(indx+2,n,stone,dp));
            }
            if(indx+2<n)
            {
                ans=max(ans,stone[indx]+stone[indx+1]+stone[indx+2]-f(indx+3,n,stone,dp));
            }
             return dp[indx]=ans;
        }
       
    }
    string stoneGameIII(vector<int>& stone)
    {
       // int turn=1;
        int i=0;
        int n=stone.size();
        vector<int>dp(n+1,0);
       // int ans=f(i,n,stone,dp);
       
        
        for(int indx=n-1;indx>=0;indx--)
        {
             int ans=INT_MIN;
            if(indx<n)ans=max(ans,stone[indx]-dp[indx+1]);
            if(indx+1<n)
            {
                ans=max(ans,stone[indx]+stone[indx+1]-dp[indx+2]);
            }
            if(indx+2<n)
            {
                ans=max(ans,stone[indx]+stone[indx+1]+stone[indx+2]-dp[indx+3]);
            }
        dp[indx]=ans;
        }
        
        
        
        
        if(dp[0]>0)return "Alice";
        if(dp[0]==0)return "Tie";
        return "Bob";
    }
};