class Solution {
public:
    
    int func(int ind1,int ind2,string &arr,string &brr,vector<vector<int>>&dp)
    {
        if(ind1<0 || ind2<0)return 0;
        if(arr[ind1]==brr[ind2])return 1+func(ind1-1,ind2-1,arr,brr,dp);
        
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        return dp[ind1][ind2]=0+max(func(ind1-1,ind2,arr,brr,dp),func(ind1,ind2-1,arr,brr,dp));
    }
    
    int longestCommonSubsequence(string text1, string text2)
    {
        int ind1=text1.size()-1;
        int ind2=text2.size()-1;
        vector<vector<int>>dp(ind1+1,vector<int>(ind2+1,-1));
        int ans=func(ind1,ind2,text1,text2,dp);
        return ans;
        
    }
};