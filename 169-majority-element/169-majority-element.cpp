class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        unordered_map<int,int> ans;
        
        int n=nums.size();
        int i=0;
        for(i=0;i<n;i++)
        {
            if(++ans[nums[i]]>n/2)
            {
                return nums[i];
            }
            
        }
        return -1;
    }
};