class Solution {
public:
    int f(int i,int j,string &s,int &k,vector<vector<int>>&dp)
    {
        if(i>=s.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int left=0,right=0;
        if(j==0 || abs(s[i]-j)<=k)
        {
            left=1+f(i+1,s[i],s,k,dp);
        }
        right=f(i+1,j,s,k,dp);
        return dp[i][j]=max(left,right);
    }
    int longestIdealString(string s, int k) 
    {
        int i=0,j=0;
        int n=s.size();
        
        vector<vector<int>>dp(n+1,vector<int>(150,-1));
        int ans=f(i,j,s,k,dp);
        return ans;
    }
};

/*
class Solution {
public:
    int solve(string& s,int index,int prev,int &k,vector<vector<int>>& dp){
        if(index>=s.size())return 0;
        
        if(dp[index][prev]!=-1)return dp[index][prev];
        
        int inc=0,notinc=0;
        if(prev==0 || abs(s[index]-prev)<=k){
            inc=1+solve(s,index+1,s[index],k,dp);
        }
        notinc=solve(s,index+1,prev,k,dp);
        
        return dp[index][prev]=max(inc,notinc);
    }
    
    int longestIdealString(string s, int k) {
        vector<vector<int>>dp (s.size()+1,vector<int>(150,-1));
        return solve(s,0,0,k,dp);
    }
};
*/
