class Solution {
public:
    int minStartValue(vector<int>& nums) 
    {
        int mini=0,sum=0;
       for(int i=0;i<nums.size();i++)
       {
       
       sum+=nums[i];
           mini=min(mini,sum);
       
       }
        return 1-mini;
        
    }
};