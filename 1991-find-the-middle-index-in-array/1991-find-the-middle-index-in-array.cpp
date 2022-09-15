class Solution {
public:
    int findMiddleIndex(vector<int>& nums)
    {
        int i=0,j=nums.size()-1;
        int total=accumulate(nums.begin(),nums.end(),0);
        // total will help us to calculate the right sum 
        // left will keep on increasing 
        int left=0,right=0;
        for(int i=0;i<nums.size();i++)
        {
            
            right=total-left-nums[i];
           // cout<<"left "<<left<<" right "<<right<<endl;
            if(left==right)return i;
            left+=nums[i];            
        }
        return -1;
        
    }
};