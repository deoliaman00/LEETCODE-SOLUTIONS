class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        // QUICK SORT APPROACH
        // EXCEPT ZERO PUT ALL THE ELEMENTS IN THE SAME ORDER
       // [0,1,0,3,12]------> 1,3,12,0,0
     //    int n=nums.size();
     //    int k=0,z=0;
     // for(int i=0;i<n;i++)
     //    {
     //        if(nums[i]!=0)
     //        {
     //            nums[k++]=nums[i];
     //        }
     //    }
     //    for(int i=k;i<n;i++)
     //    {
     //        nums[i]=0;
     //    }
     // }  
     //    //return nums;
        int n=nums.size();
        int swapper=0,cur=0;
        for(;cur<n;cur++)
        {
           if(nums[cur]!=0)
           {
               swap(nums[cur],nums[swapper++]);
           }
        }
        
        
    }
};