class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
    {
        int a1,a2,a3;
        int n=nums.size();
        a1=a2=a3=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
           if(nums[i]<=a1)
           {
               a1=nums[i];
           }
           else if(nums[i]<=a2)
           {
               a2=nums[i];
           }
           else
           {
               return true;
           }
        }
        
        return false;       
    }
};