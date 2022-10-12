class Solution {
public:
    int largestPerimeter(vector<int>& nums)
    {bool flag=true;
        int i=nums.size()-1;
        sort(nums.begin(), nums.end());
        while( i>1){
            int a=nums[i-2]+nums[i-1];
            int b=nums[i-1]+nums[i];
            int c=nums[i]+nums[i-2];
            if(nums[i-2]>=b || nums[i-1]>=c || nums[i]>=a){
                i--;
            }
            else{
                return (a+b+c)/2;
            }
        }
        return 0;
            
        }
        
        
    };