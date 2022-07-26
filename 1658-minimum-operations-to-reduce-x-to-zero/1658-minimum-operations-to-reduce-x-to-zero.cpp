class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0,i=0,j=0,ans=0,target=0;
        for (int i:nums) target+=i;
        target-=x;
        if (target<0) return -1;
        if (target==0) return nums.size();
        while (j<nums.size()) {
            sum+=nums[j];
            while (sum>target) {
                sum-=nums[i];
                i++;
            }
            if (sum==target) {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        if (ans) return nums.size()-ans;
        return -1;
    }
};