class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        int n=nums.size();
        int reacheable=0;
        for(int i=0;i<n;i++)
        {
            if(reacheable<i)
            {
                return false;
            }
            reacheable=max(reacheable,i+nums[i]);
        }
        return true;
        
    }
};