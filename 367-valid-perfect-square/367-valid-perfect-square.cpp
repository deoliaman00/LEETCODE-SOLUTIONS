class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if(num==1) return true;
        long long int sum=0;
        
        int  n=1;
        for(;n<num;n++)
        {
            sum+=n;
            if(num==sum)
            {
                return true;
            }
            n++;
        }
        return false;
        
    }
};