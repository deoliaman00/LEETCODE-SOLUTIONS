class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int j=n-1,i=0;
        int c=0;
        sort(nums.begin(),nums.end());
         while(i<j)
            {
                if(nums[i]+nums[j]==k)
                {
                    i++;j--;
                  //nums.erase(nums.begin()+i);
                   //ms.erase(nums.begin()+j+1);
                    c++;
                }
                else if((nums[i]+nums[j])<k)
                {
                    i++;
                }
                else
                {
                    j--;
                }
                
            }
        
        return c;
        
    }
};