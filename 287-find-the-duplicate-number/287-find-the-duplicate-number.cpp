class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        // this solution will take 0(n) time and 0(1) space
        int fast=nums[0];
        int slow=nums[0];
        int n=nums.size();
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
            
        }while(slow!=fast);
        
        //. finding the entrance point
        slow=nums[0];
        
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        
        return fast;
        
        
    }
};