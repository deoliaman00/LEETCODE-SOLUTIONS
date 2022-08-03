class Solution {
public:
    bool check(string str,int i)
    {
        for(int j=0;j<=i;j++)
        {
            if(str[j]!='*')
            {
                return false;
            }
        }
        return true;
    }
    
    bool f(int i,int j,string &str1,string &str2,vector<vector<int>>&dp)
    {
        if(i<0 && j<0)return true;
        if(i<0 && j>=0)return false;
        if(j<0 && i>=0)return check(str1,i);
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(str1[i]==str2[j] || str1[i]=='?')
        {
            return dp[i][j]=f(i-1,j-1,str1,str2,dp);
        }
        else{
            if(str1[i]=='*')
            {
                return dp[i][j]=f(i-1,j,str1,str2,dp)||f(i,j-1,str1,str2,dp);
            }
            
            return dp[i][j]=false;
        }
        
    }
    bool isMatch(string s, string p) 
    {
        int s1Length=p.size();
        int s2Length=s.size();
        vector<vector<int>>dp(s1Length,vector<int>(s2Length,-1));
        return f(s1Length-1,s2Length-1,p,s,dp);
    }
};