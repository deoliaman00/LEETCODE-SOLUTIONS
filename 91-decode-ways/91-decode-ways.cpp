class Solution {
public:
    int ways(string s, int i,vector<int>&dp)
    {
        if(i==s.length())
            return 1;
        if(dp[i]!=-1)return dp[i];
        int count=0;
        if(s[i] != '0')
            count += ways(s,i+1,dp);
        
        if(i+1 < s.length() && (s[i] == '1' || (s[i] == '2' && s[i+1] <='6')))
            count += ways(s,i+2,dp);
        
        return dp[i]=count;
    }
    
    int numDecodings(string s)
    {
        int n=s.size();
        vector<int>dp(n,-1);
        return ways(s,0,dp);
    }
};