class Solution {
public:
    int stoneGameII(vector<int>a)
    {
        int n=a.size();
        vector<int>sum(n);
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(n+1,vector<int>(3,0)));
        for(int i=0;i<n;i++){
            if(i==0){
                sum[i]=a[i];
            }else{
                sum[i]=sum[i-1]+a[i];
            }
        }
        
        return fun(a,1,0,1,sum,dp);
        
    }
    int query(vector<int>&sum,int l,int r)
    {
        if(l==0)
            return sum[r];
        else
            return sum[r]-sum[l-1];
    }
    
    int fun(vector<int>&a,int m,int ind,int turn,vector<int>&sum,vector<vector<vector<int>>>&dp){
        if(ind>=a.size()){
            return 0;
        }
        
        // turn -> 1 -> Alice
        // turn -> 2 -> Bob
        if(dp[ind][m][turn]!=0){
            return dp[ind][m][turn];
        }
        if(turn==1){
            int ans=0;
            for(int i=ind;i<ind+2*m && i<a.size();i++){
                ans=max(ans,query(sum,ind,i)+fun(a,max(i-ind+1,m),i+1,2,sum,dp));
            }
            return dp[ind][m][turn]=ans;
        }else{// turn==2
            int ans=INT_MAX;
            for(int i=ind;i<ind+2*m && i<a.size();i++){
                ans=min(ans,fun(a,max(i-ind+1,m),i+1,1,sum,dp));
            }
            if(ans==INT_MAX)
                ans=0;
            return dp[ind][m][turn]=ans;
        }
    }
};