class Solution {
    public int stoneGameII(int[] a) {
        int n=a.length;
        int sum[]=new int[n];
        for(int i=0;i<n;i++){
            if(i==0){
                sum[i]=a[i];
            }else{
                sum[i]=sum[i-1]+a[i];
            }
        }
        
        return fun(a,1,0,1,sum,new int[n][n+1][3]);
        
    }
    public int query(int sum[],int l,int r){
        if(l==0)
            return sum[r];
        else
            return sum[r]-sum[l-1];
    }
    
    public int fun(int a[],int m,int ind,int turn,int sum[],int dp[][][]){
        if(ind>=a.length){
            return 0;
        }
        
        // turn -> 1 -> Alice
        // turn -> 2 -> Bob
        if(dp[ind][m][turn]!=0){
            return dp[ind][m][turn];
        }
        if(turn==1){
            int ans=0;
            for(int i=ind;i<ind+2*m && i<a.length;i++){
                ans=Math.max(ans,query(sum,ind,i)+fun(a,Math.max(i-ind+1,m),i+1,2,sum,dp));
            }
            return dp[ind][m][turn]=ans;
        }else{// turn==2
            int ans=Integer.MAX_VALUE;
            for(int i=ind;i<ind+2*m && i<a.length;i++){
                ans=Math.min(ans,fun(a,Math.max(i-ind+1,m),i+1,1,sum,dp));
            }
            if(ans==Integer.MAX_VALUE)
                ans=0;
            return dp[ind][m][turn]=ans;
        }
    }
}