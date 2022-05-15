class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
         int result = nums.size(); // result=3
        int i=0;
        // = [3,0,1]
        
        for(int num:nums)
        {
            result= result ^ num; // 3^3=0   0^0=0     
            result= result ^ i; // 0^0=0    0^1=1     
            i++;
        }
        
        return result;
        
        
    }
};


//approach2 
// int n=nums.size();
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++)
//         {
//             if(i!=nums[i])
//             {
//                 return i;
//             }
                 
//         }
//         return n;