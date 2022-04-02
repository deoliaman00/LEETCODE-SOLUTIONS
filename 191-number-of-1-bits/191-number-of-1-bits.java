public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n)
    {
        /* solution1
        int count =0;
        int m=1;
        for(int i=0;i<32;i++)
        {
            if((n&m)!=0)
                count++;
            m=m<<1;
        }
        return count;
        */
        
        // solution2
        int count=0;
        while(n!=0)
        {
            n=n&(n-1);
           count++;
        }
        return count;
        
        
        
    }
}