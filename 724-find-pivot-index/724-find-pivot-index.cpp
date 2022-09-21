class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int rS=sum,lS=0;
        for(int i=0;i<n;i++)
        {
            
            rS-=nums[i];
            if(lS==rS)
            {
                return i;
            }
            lS+=nums[i];
        }
        
        return -1;
    }
};