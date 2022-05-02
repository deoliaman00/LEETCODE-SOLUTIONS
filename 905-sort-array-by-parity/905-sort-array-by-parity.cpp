class Solution {
public:
    void swap(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    
    vector<int> sortArrayByParity(vector<int>& nums)
    {
        int n=nums.size();
        
        if(n==0 || n==1)
        {
            return nums;
        }
        int j=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                j++;
                swap(&nums[i],&nums[j]);
            }
        }
        
        return nums;
    }
};