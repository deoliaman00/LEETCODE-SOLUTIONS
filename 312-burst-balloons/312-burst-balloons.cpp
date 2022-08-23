class Solution {
public:
    int maxCoins(vector<int>& nums)
    {
        int n=nums.size();
        vector<vector<int>>dp(n+2,vector<int>(n+2,0));
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        
        for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=n;j++)
            {
                int maxi=INT_MIN;
                if(i>j)
                {
                    continue;
                }
                for(int k=i;k<=j;k++)
                {
                    int cost=nums[i-1]*nums[k]*nums[j+1]+dp[i][k-1]+dp[k+1][j];
                    maxi=max(cost,maxi);
                }
                dp[i][j]=maxi;
            }
        }
        
        return dp[1][n];
        
    }
};