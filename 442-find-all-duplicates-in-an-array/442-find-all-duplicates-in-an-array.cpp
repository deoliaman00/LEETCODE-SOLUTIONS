class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        vector<int>ans;
        
         int n=nums.size();
        int index=0;
        for(int i=0;i<n;i++)
        {
            index=abs(nums[i])-1;
            if(nums[index]<0)
            {
                ans.push_back(index+1);
            }
            else
            {
                nums[index]*=-1;
            }
        }
        
        
        
        return ans;
    }
};