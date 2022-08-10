class Solution {
public:
    // this function will give me the maximum sum of all elements which are non adjacent 
    // also 
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
    int ff(vector<int>nums)
    {
        vector<int>arr1,arr2;
        int n=nums.size();
          vector<int>dp1(n-1,-1),dp2(n-1,-1);
        for(int i=0;i<n-1;i++)
        {
            arr1.push_back(nums[i]);
        }
        
        for(int i=1;i<n;i++)
        {
            arr2.push_back(nums[i]);
        }
        int n1=arr1.size();
        int n2=arr2.size();
        int maxi=INT_MIN;
        maxi=max(f(n1-1,arr1,dp1),f(n2-1,arr2,dp2));
        
        return maxi;
        
    }
    
    
    int rob(vector<int>& nums) 
    {
         int n=nums.size();
      if(n==1)return nums[0];
        int ans=ff(nums);
        
        return ans;
        
    }
};

/*

    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,-1);
        int ans=f(n-1,nums,dp);
        
        return ans;
   */     