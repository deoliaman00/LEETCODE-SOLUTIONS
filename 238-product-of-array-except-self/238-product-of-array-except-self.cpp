class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>ans(n,0);
        int flag=1;
        for(int i=0;i<n;i++)
        {
            flag=flag*nums[i];
            ans[i]=flag;
        }
        flag=1;
        for(int i=n-1;i>0;i--)
        {
            ans[i]= ans[i-1]*flag;
            flag=flag*nums[i];
        }
        ans[0]=flag;

        return ans;
    }
};