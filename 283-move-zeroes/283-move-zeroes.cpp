class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        // QUICK SORT APPROACH
        // EXCEPT ZERO PUT ALL THE ELEMENTS IN THE SAME ORDER
       // [0,1,0,3,12]------> 1,3,12,0,0
       /* int n=nums.size();
        int k=0,z=0;
     for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[k++]=nums[i];
                cout<<nums[k]<<"...";   
            }
        }
        for(int i=k;i<n;i++)
        {
            nums[i]=0;
        }
     }  
        //return nums;
        
        */
        
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
        
    
};