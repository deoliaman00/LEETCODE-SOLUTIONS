class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        
        int h=nums.size()-1;
        int l=0;
        // if(h==1)
        // {
        //     if(nums[0]==target)
        //     {
        //         return 0;
        //     }
        // }
        int mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        
        return -1;
        
    }
};