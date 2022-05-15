class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        for(int i=0;i<=30;i++)
        {
            if(n==pow(2,i))
            {
                return true;
            }
            if(n<pow(2,i))
            {
                return false;
            }
            
        }
        return false;
    }
};