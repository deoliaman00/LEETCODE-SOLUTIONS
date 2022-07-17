class Solution {
public:
    int kInversePairs(int n, int k) {
         int dp[1001][1001];
        memset(dp,0, sizeof(dp));
        
        for(int i =1 ; i<=n ;i++)
        {
            for(int j =0 ; j<=k ;j++)
            {
                if(j == 0)
                     dp[i][j]=1;
                else
                for(int m=0 ; m<= min(j,i-1) ; m++)
                    dp[i][j] = ( dp[i][j] + dp[i-1][j-m] ) % 1000000007;
            }
        }
        return dp[n][k];
    }
};

// class Solution {
// public:
    
//      int dp[1001][1001];
//      int memo = 1000000007;
    
//     int func(int n,int k)
//     {if(k == 0 )
//         return 1;
//      if(n == 0 ) return 0;
     
//      if(dp[n][k] != -1) return dp[n][k];
     
//      int ans = 0;
//      for(int i=0 ; i<= min(n-1,k) ; i++)
//      {
//          ans += kInversePairs(n-1,k-i);
//      }
     
//      return ans%memo;
//     }
//     int kInversePairs(int n, int k) 
//     {
//         memset(dp,-1,sizeof(dp));
//         return func(n,k)%memo;
               
        
//     }
// };