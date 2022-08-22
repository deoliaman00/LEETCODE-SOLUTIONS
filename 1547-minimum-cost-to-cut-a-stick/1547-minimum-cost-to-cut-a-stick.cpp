class Solution {
public:
    int f(int i,int j,vector<int>& cuts)
    {
        if(i>j)return 0;
        int mini=INT_MAX;
        
        for(int indx=i;indx<=j;indx++)
        {
            int steps=cuts[j+1]-cuts[i-1]+f(i,indx-1,cuts)+f(indx+1,j,cuts);
            mini=min(mini,steps);
        }
        return mini;
    }
    int minCost(int n, vector<int>& cuts)
    {
        int c=cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        
        vector<vector<int>>dp(c+2,vector<int>(c+2,0));
        
        
        
        for(int i=c;i>=1;i--)
        {
             for(int j=1;j<=c;j++)
             {
                 int mini=INT_MAX;
                 if(i>j)continue;
                for(int indx=i;indx<=j;indx++)
                {
                    int steps=cuts[j+1]-cuts[i-1]+dp[i][indx-1]+dp[indx+1][j];
                    mini=min(mini,steps);
                }
                 dp[i][j]=mini;

             }
        }
        return dp[1][c]; 
        
    }
};