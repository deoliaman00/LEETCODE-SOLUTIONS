class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n<=0)
            return false;

       auto val=(n&(n-1));
        if(val==0)
            return true;
        
        
        
        return false;
    }
};