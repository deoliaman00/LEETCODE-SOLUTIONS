class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        int sum = 0, ln=32;
    while(ln--){
        sum = 2LL*sum + n%2;
        n >>= 1;
    }
    
    return sum;
        
    }
};