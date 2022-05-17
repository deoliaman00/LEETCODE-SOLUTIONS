//approach2
class Solution {
public:
    int reverse(int x)
    {
        // approach2 
        int digit=0,ans=0;
        while(x)
        {
            digit=x%10;
            if((ans>INT_MAX/10)|| (ans<INT_MIN/10))    
            {
               return 0;
            }
             ans= ans*10+digit;
            x=x/10;      
        }
        
        return ans;
        
    }
};