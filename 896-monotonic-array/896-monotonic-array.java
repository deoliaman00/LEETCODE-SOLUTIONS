class Solution {
    public boolean isMonotonic(int[] nums)
    {
        boolean increasing=true;
        boolean decreasing=true;
        int n=nums.length-1;
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i] > nums[i+1]) increasing =false;
            if(nums[i]<nums[i+1])  decreasing =false;
        }
        return increasing==true|| decreasing==true;
        
    }
}