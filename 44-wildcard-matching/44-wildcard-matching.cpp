class Solution {
public:
    bool check(string &str,int i)
    {
        for(int j=1;j<=i;j++)
        {
            if(str[j-1]!='*')
            {
                return false;
            }
        }
        return true;
    }
    
    bool f(int i,int j,string &str1,string &str2,vector<vector<int>>&dp)
    {
        if(i==0 && j==0)return true;
        if(i==0 && j>0)return false;
        if(j==0 && i>0)return check(str1,i);
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(str1[i-1]==str2[j-1] || str1[i-1]=='?')
        {
            return dp[i][j]=f(i-1,j-1,str1,str2,dp);
        }
        else{
            if(str1[i-1]=='*')
            {
                return dp[i][j]=f(i-1,j,str1,str2,dp)||f(i,j-1,str1,str2,dp);
            }
            
            return dp[i][j]=false;
        }
        
    }
    bool isMatch(string s, string p) 
    {
       int n1=p.size();
        int n2=s.size();
        vector<vector<bool>>dp(n1+1,vector<bool>(n2+1,false));
        
        dp[0][0]=true;
        for(int j=1;j<=n2;j++)
        {
            dp[0][j]=false;
        }
        
        for(int i=1;i<=n1;i++)
        {
            dp[i][0]=check(p,i);
        }
        
       for(int i=1;i<=n1;i++)
       {
           for(int j=1;j<=n2;j++)
           {
                if(p[i-1]==s[j-1] || p[i-1]=='?')
                {
                    dp[i][j]=dp[i-1][j-1];
                }
            else{
                if(p[i-1]=='*')
                {
                    dp[i][j]=dp[i-1][j]||dp[i][j-1];
                }
                else{
                    dp[i][j]=false;
                }             
                
            }
           }
       }
               
        return dp[n1][n2];
    }
};