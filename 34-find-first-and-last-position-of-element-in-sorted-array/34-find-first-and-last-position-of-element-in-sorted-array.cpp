class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int>ans(2,-1);
        int low=0,high=nums.size()-1;
        // case1:- for finding first occurence
        while(high>=low)
        {
            int mid=low + (high-low)/2;
            if(nums[mid]==target)
            {
                ans[0]=mid;
                high=mid-1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        
        // case2:- for finding first occurence
        
        low=0,high=nums.size()-1;
        while(high>=low)
        {
            int mid=low + (high-low)/2;
            if(nums[mid]==target)
            {
                ans[1]=mid;
                low=mid+1; 
            }
            else if(nums[mid]<target)
            {
                 low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        
        return ans;
        
    }
};