class Solution {
public:
    bool isUgly(int n) 
    {
        if(n==0)return false;
       if(n==1)return true;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                continue;
            }
            if(n%3==0)
            {
                n=n/3;
                continue;
            }
            if(n%5==0)
            {
                n=n/5;
                continue;
            }
            else
            {
                return false;
            }
        }
        
        return true;
        
    }
};

/*
Example 1:

Input: n = 6
Output: true
Explanation: 6 = 2 × 3
Example 2:

Input: n = 1
Output: true
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
Example 3:

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.

*/
