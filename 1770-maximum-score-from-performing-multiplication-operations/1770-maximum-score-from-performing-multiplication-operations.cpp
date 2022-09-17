class Solution {
public:
    vector<vector<int>>dp;
    int f(int indx,int left,int right,vector<int>& nums, vector<int>& mus)
    {
        if(indx==mus.size())return 0;
        if(dp[indx][left]!=INT_MIN)
        {
            return dp[indx][left];
        }
        int l=nums[left]*mus[indx]+f(indx+1,left+1,right,nums,mus);
        int r=nums[right]*mus[indx]+f(indx+1,left,right-1,nums,mus);
        return dp[indx][left]=max(l,r);
    }
    int maximumScore(vector<int>& nums, vector<int>& mus) 
    {
        int n=nums.size()-1;
        int m=mus.size();
        dp.assign(m+1,vector<int>(m+1,INT_MIN));
        return f(0,0,n,nums,mus);
        
    }
};