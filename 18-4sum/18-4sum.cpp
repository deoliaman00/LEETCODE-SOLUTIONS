class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
         vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int a=0,b=0,c=0,d=0,sum=0;
        int n=nums.size();
        int rsum=0;
        
        for(;a<n;a++)
        {
           
                for(b=a+1;b<n;b++)
                {
                    rsum=target-nums[b]-nums[a];
                    c=b+1,d=n-1;
                    while(c<d)
                    {
                        sum=nums[c]+nums[d];
                        
                        if(rsum==sum)
                        {
                            vector<int>aa;
                            aa.push_back(nums[a]);
                            aa.push_back(nums[b]);
                            aa.push_back(nums[c]);
                            aa.push_back(nums[d]);
                            ans.push_back(aa);
                            
                            while(c<d && (nums[c]==nums[c+1])) c++;
                            while(c<d && (nums[d]==nums[d-1])) d--;
                            
                            c++;
                            d--;
                        }
                        else if(rsum>sum)
                        {
                            c++;
                            
                        }
                        else
                        {
                            d--;
                        }
                    }
                
                while(b+1<n && (nums[b]==nums[b+1])) b++;
                }
            while(a+1<n && (nums[a]==nums[a+1])) a++;
            }
        
        return ans;
        
    }
};


















