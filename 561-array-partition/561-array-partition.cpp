class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();int sum=0;
        int i=1;
        for(;i<n;i=i+2)
        {
            sum+=min(nums[i-1],nums[i]);
        }
        return sum;
        
    }
};