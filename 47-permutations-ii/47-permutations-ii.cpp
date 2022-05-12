class Solution {
    private:
    set<vector<int>>ans;
    
public:
    void permii(vector<int>nums,int indx, vector<vector<int>>&permuteUniq)
    {
        if(indx>=nums.size() && ans.find(nums)==ans.end()) // find should be equal to -1
        {
            ans.insert(nums);
         permuteUniq.push_back(nums);   
            return;
        }
        
        for(int i=indx;i<nums.size();i++)
        {
            swap(nums[i],nums[indx]); // 0 0  1 0  2 0 
            permii(nums,indx+1,permuteUniq);
            swap(nums[i],nums[indx]);
            
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
       
        vector<vector<int>> perm;
       
        permii(nums,0,perm);
        return perm;
    }
};