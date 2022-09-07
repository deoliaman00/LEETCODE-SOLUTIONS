class Solution {
public:
    int f(int indx,int c,int n,vector<int>&sat,vector<vector<int>>&dp)
    {
        if(indx==n)
        {
            return 0;
        }
       if(dp[indx][c]!=-1)return dp[indx][c];
       
            int left=(c)*sat[indx]+f(indx+1,c+1,n,sat,dp);
            int right=f(indx+1,c,n,sat,dp);
             
        
        return dp[indx][c]=max(left,right);
    }
    
    int maxSatisfaction(vector<int>& sat)
    {
        int n=sat.size();
        sort(sat.begin(),sat.end());
        vector<vector<int>>dp(n,vector<int>(n+2,-1));
        int ans=f(0,1,n,sat,dp);
        return ans;
        
    }
};