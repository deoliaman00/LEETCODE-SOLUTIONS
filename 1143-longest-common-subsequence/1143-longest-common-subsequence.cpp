class Solution {
public:
    
    int func(int ind1,int ind2,string &arr,string &brr,vector<vector<int>>&dp)
    {
        if(ind1<0 || ind2<0)return 0;
        if(arr[ind1]==brr[ind2])return 1+func(ind1-1,ind2-1,arr,brr,dp);
        
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        return dp[ind1][ind2]=0+max(func(ind1-1,ind2,arr,brr,dp),func(ind1,ind2-1,arr,brr,dp));
    }
    
    int longestCommonSubsequence(string text1, string text2)
    {
        int indx1=text1.size();
        int indy2=text2.size();
      //  vector<vector<int>>dp(ind1+1,vector<int>(ind2+1,-1));
      //  int ans=func(ind1,ind2,text1,text2,dp);
       // return ans;
        
        vector<vector<int>>dp(indx1+1,vector<int>(indy2+1,0));
        
        for(int i=0;i<=indx1;i++)dp[i][0]=0;
        for(int i=0;i<=indy2;i++)dp[0][i]=0;
        for(int ind1=1;ind1<=indx1;ind1++)
        {
            for(int ind2=1;ind2<=indy2;ind2++)
            {
                if(text1[ind1-1]==text2[ind2-1]) dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
                else 
                {
                    dp[ind1][ind2]=0+max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
                }
            }
        }
        return dp[indx1][indy2];
        
    }
};