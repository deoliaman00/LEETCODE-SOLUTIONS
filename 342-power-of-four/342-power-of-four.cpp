class Solution {
public:
    bool isPowerOfFour(int n)
    {
        int num=n;
        if(n==0)return false;
        while(num!=0)
        {
            int a=num%4;
            int b=num/4;
            num=b;
            if(b==0 && a==1)return true;
            if(a!=0)return false;
        }
        
        return true;
        
    }
};