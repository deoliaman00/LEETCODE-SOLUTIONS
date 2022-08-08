class Solution {
public:
    int f(int cIndx,int pIndx,int N,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(cIndx==N)return 0;
        
        if(dp[cIndx][pIndx+1]!=-1)
        {
            return dp[cIndx][pIndx+1];
        }
        int nTake=0+f(cIndx+1,pIndx,N,nums,dp);
        int take=0;
        if(pIndx==-1 || nums[pIndx]<nums[cIndx])
        {
            take=1+f(cIndx+1,cIndx,N,nums,dp);
        }
        
        return dp[cIndx][pIndx+1]=max(nTake,take);
    }
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        int ans=f(0,-1,n,nums,dp);
        return ans;
        
    }
};