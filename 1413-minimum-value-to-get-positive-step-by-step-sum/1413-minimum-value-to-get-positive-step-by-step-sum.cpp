class Solution {
public:
    int minStartValue(vector<int>& nums) 
    {
        int mini=0,sum=0;
       for(int i=1;i<nums.size();i++)
       {
       
            nums[i]=nums[i-1]+nums[i];
           mini=min(mini,nums[i]);
       
       }
        mini=min(mini,nums[0]);
        return 1-mini;
        
    }
};