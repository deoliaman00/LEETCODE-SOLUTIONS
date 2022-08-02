int prime = 1e9+7;
class Solution {
public:
    int func(int indx1,int indx2,string s,string t,vector<vector<int>>&dp)
    {
        if(indx2<0)return 1;
        if(indx1<0)return 0;
        if(dp[indx1][indx2]!=-1)return dp[indx1][indx2];
        if(s[indx1]==t[indx2])
        {
            return func(indx1-1,indx2-1,s,t,dp)+func(indx1-1,indx2,s,t,dp);
        }
        
        return dp[indx1][indx2]=func(indx1-1,indx2,s,t,dp);
    }
    
    
    
    int numDistinct(string s, string t)
    {
        int n1=s.size();
        int n2=t.size();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
       // return func(n1-1,n2-1,s,t,dp);
        
       for (int i = 0; i <= n1; i++) {
           dp[i][0] = 1;
        }
      //  for (int i = 0; i <= n2; i++) {
       //     dp[0][i] = 1;
        //}
        for(int indx1=1;indx1<=n1;indx1++)
        {
            for(int indx2=1;indx2<=n2;indx2++)
            {
                if(s[indx1-1]==t[indx2-1])
                {
                    dp[indx1][indx2]=(dp[indx1-1][indx2-1]+dp[indx1-1][indx2])%prime;
                }
                
                else
                {
                    dp[indx1][indx2]=dp[indx1-1][indx2];
                }
            }
        }
        return dp[n1][n2];
    }
};