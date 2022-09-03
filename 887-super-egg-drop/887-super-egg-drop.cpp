class Solution {
public:
    
    int superEggDrop(int K, int N) {
          vector<vector<int>> dp(K+1, vector<int>(N+1,0));
        int m = 0;
        while (dp[K][m] < N) {
            m++;
            for (int k = 1; k <= K; k++)
                dp[k][m] = dp[k][m - 1] + dp[k - 1][m - 1] + 1;
        }
        return m;
        
        
    }
};
/*
class Solution {
public:
    int func(int egg,int floors,vector<vector<int>>&dp)
    {
        if(floors==0||floors==1)return floors;
        if(egg<=1)return floors;
        if(dp[egg][floors]!=-1)return dp[egg][floors];
        int mini=INT_MAX;
        for(int k=1;k<=floors;k++)
        {
            int steps=1+max(func(egg-1,k-1,dp),func(egg,floors-k,dp));
            mini=min(steps,mini);
            
        }
        return dp[egg][floors]=mini;
        
    }
    int superEggDrop(int k, int n)
    {
        int el=k;
        vector<vector<int>>dp(k+1,vector<int>(n+1,0));
        for(int i=0;i<k+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(j==1)
                {
                    dp[i][j]=1;
                }
                if(i==1)
                {
                    dp[i][j]=j;
                }
            }
        }
         int mini=INT_MAX;
        for(int egg=1;egg<=el;egg++)
        {
            for(int floors=1;floors<=n;floors++)
            {
                    for(int k=1;k<=floors;k++)
                    {
                        int steps=1+max(dp[egg-1][k-1],dp[egg][floors-k]);
                        mini=min(steps,mini);
                    }
                 dp[egg][floors]=mini;
            }
             
        }
        return dp[k][n];
    }
};
*/
