class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int n=nums.size();
        int a=0;
        // [3,0,1]
        for(auto i:nums)
        {
            n= n^i;
            n=n^a;
            a++;
        }
        return n;
        
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