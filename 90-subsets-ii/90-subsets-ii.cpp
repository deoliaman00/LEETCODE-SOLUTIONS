class Solution {
public:
     vector<int>nl;
     set<vector<int>>st;
    void f(int indx,vector<vector<int>>&sub,vector<int>& nums) 
    {
        
        if(indx<0)
        {
            if(st.find(nl)==st.end())
            {
                 sub.push_back(nl);
                 st.insert(nl);
            }
           
            return;
        }
       
        nl.push_back(nums[indx]);
        f(indx-1,sub,nums);
        nl.pop_back();
        f(indx-1,sub,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> sub;
        f(n-1,sub,nums);
        return sub;
        
    }
};