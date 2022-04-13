class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        //...METHOD 1......
//         unordered_map<int,int> ans;
        
//         int n=nums.size();
//         int i=0;
//         for(i=0;i<n;i++)
//         {
//             if(++ans[nums[i]]>n/2)
//             {
//                 return nums[i];
//             }
            
//         }
//         return -1;

        
        
        int count=0,ele=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                ele=nums[i];
            }
            if(ele==nums[i])
            {
                count++;
            }
            else if(ele!=nums[i])
            {
                count--;
            }
        }
        
        return ele;
    }
};