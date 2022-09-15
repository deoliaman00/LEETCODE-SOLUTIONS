class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        vector<int>ans,demo(nums.size());
        sort(nums.begin(),nums.end());
        demo[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            demo[i]=demo[i-1]+nums[i];
        }
        for(int i=0;i<queries.size();i++)
        {
            int q=queries[i];
            ans.push_back(upper_bound(demo.begin(),demo.end(),q)-demo.begin());
        }
        
        return ans;
        
    }
};