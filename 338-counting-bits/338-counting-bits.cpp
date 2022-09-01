class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>Ans(n+1);
        Ans[0]=0;
        for(int i=1;i<=n;i++)
        {
            Ans[i]=Ans[i/2]+i%2;
        }
        return Ans;
        
    }
};