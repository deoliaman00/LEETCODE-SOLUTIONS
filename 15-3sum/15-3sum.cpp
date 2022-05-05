class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int remSum=0,sum=0,j=0,k=0;
        vector<vector<int>>ansF;
        for(int i=0;i<n-2;i++)
        {
           
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                
            remSum=0-nums[i];
            j=i+1,k=n-1;
            while(j<k)
            {
                sum=nums[j]+nums[k];
                if(sum==remSum)
                {
                    vector<int>ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                    ansF.push_back(ans);
                    
                     while(j<k && nums[j]==nums[j+1]) j++;
                     while(j<k && nums[k]==nums[k-1]) k--;

                    
                    j++,k--;
                }
                else if(sum<remSum)
                {
                    j++;
                }
                else
                {
                    k--;
                }
                
                
            }
            }
        }
        return ansF;
    }
};