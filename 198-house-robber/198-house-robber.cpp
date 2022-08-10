class Solution {
public:
    int f(int indx,vector<int>& nums,vector<int>&dp)
    {
        if(indx==0)return nums[0];
        if(indx<0)return 0;
        
        if(dp[indx]!=-1)return dp[indx];
        int notTake=INT_MIN;
        int take=INT_MIN;
        notTake=0+f(indx-1,nums,dp);
         take=nums[indx]+f(indx-2,nums,dp);
       
        return dp[indx]=max(notTake,take);
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,-1);
        int ans=f(n-1,nums,dp);
        
        return ans;
        
    }
};