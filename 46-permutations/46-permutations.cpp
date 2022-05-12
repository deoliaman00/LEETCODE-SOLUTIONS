class Solution {
public:
    void permii(vector<int>& nums,int indx,vector<vector<int>> &p)
    {
        if(indx>=nums.size())
        {
         p.push_back(nums);   
            return;
        }
        
        for(int i=indx;i<nums.size();i++)
        {
            swap(nums[i],nums[indx]); // 0 0  1 0  2 0 
            permii(nums,indx+1,p);
            swap(nums[i],nums[indx]);
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> perm;
       
        permii(nums,0,perm);
        return perm;
        
    }
};