class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int mini= INT_MAX;
        int ans=0;
        for(auto i:nums)
        {
            mini=min(i,mini);
        }
        
        for(auto i:nums)
        {
            ans+= abs(i-mini);
        }
        
        return ans;
        
    }
};