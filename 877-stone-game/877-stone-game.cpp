class Solution {
public:
    int f(int l,int r,int t,vector<int>&p,vector<vector<int>>&dp)
    {
        if(l>=r)return 0;
        
        if(dp[l][r]!=-1)return dp[l][r];
        int scoreI=f(l+1,r,1-t,p,dp);
        int scoreII=f(l,r-1,1-t,p,dp);
        
        
        if(t==1)//Alice turn
        {           
            return dp[l][r]=max(scoreI+p[l],scoreII+p[r]);
        }
        else if(t==0)// Bob turn to Alice to perform best bob has to perform bad
        {
            return dp[l][r]=min(scoreI,scoreII);
        }
       return 0;
    }
    bool stoneGame(vector<int>& piles)
    {
        int turn=1;
        int left=0,right=piles.size()-1;
        int n=piles.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int Aliceans=f(left,right,turn,piles,dp);
        
        int Sum=accumulate(piles.begin(),piles.end(),0);
        int Bobans=Sum-Aliceans;
        if(Aliceans>Bobans)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};