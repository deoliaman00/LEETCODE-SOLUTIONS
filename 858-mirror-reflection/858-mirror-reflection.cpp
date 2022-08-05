class Solution {
public:
    int mirrorReflection(int p, int q)
    {
        /*
        if p is even and q is odd => return 2
        if p is odd and q is even => return 0
        if p is odd and q is odd => return 1
          */
        while(p%2==0 && q%2==0)
        {
            p=p/2;
            q=q/2;
        }
        
        if(p%2==0 && q%2!=0)return 2;
        if(p%2!=0 && q%2==0)return 0;
        if(p%2!=0 && q%2!=0)return 1;
        
        
        return -1;
    }
};