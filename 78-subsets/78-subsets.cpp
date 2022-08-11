class Solution {
public:
     vector<int>nl;
    void f(int indx,vector<vector<int>>&sub,vector<int>& nums) 
    {
        
        if(indx<0)
        {
            sub.push_back(nl);
            return;
        }
       
        nl.push_back(nums[indx]);
        f(indx-1,sub,nums);
        nl.pop_back();
        f(indx-1,sub,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n=nums.size();
        vector<vector<int>> sub;
        f(n-1,sub,nums);
        return sub;
    }
};