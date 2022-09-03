class Solution {
public:
      int solve(int e,int f,vector<vector<int>>&t){
        if(f==0||f==1)
            return f;
        if(e==1)
            return f;
        if(t[e][f]!=-1)
            return t[e][f];
        int mn=INT_MAX;
        int low=0,high=f,temp=0;
        while(low<=high){
            int mid=(low+high)/2;
            int down=solve(e-1,mid-1,t); //check down floor
            int up=solve(e,f-mid,t);//check upper floor
             temp=1+max(down,up);//max bcz need worst case
            if(down<up)//for worst case changing value
                low=mid+1;
            else
                high=mid-1;
            
            
            mn=min(mn,temp);
        }
        return t[e][f]=mn;
    }
    int superEggDrop(int k, int n) {
        vector<vector<int>>t(k+1,vector<int>(n+1,-1));
        //memset(t,-1,sizeof(t));
        return solve(k,n,t);
    }
};