class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int maxi=INT_MIN;
        int cSUM=0;
       
        for(int i=0;i<nums.size();i++)
        {
            cSUM=nums[i]+cSUM; 
            if(cSUM>maxi)
            {
                maxi=cSUM;
            }
            if(cSUM<0)
            {
                cSUM=0;
            }        
        }
        
        return maxi;
    }
};