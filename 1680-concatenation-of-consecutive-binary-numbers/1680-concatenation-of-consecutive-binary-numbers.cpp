class Solution {
public:
    int bitcount(int i)
    {
        return log2(i)+1;
    }
    int concatenatedBinary(int n)
    {
        long mod=1e9+7;
        long ans=0;
        for(long i=1;i<=n;i++)
        {
            int no=bitcount(i);// no=1===2===3===4===5
            ans=((ans<<no)%mod+i)%mod;
        }
        
        
        return ans;
        
        
    }
};