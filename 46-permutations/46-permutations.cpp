class Solution {
public:
    
    void recurr(vector<int>&nums,vector<vector<int>>&ans,vector<int>&car,int A[])
    {
        if(car.size()==nums.size())
        {
            ans.push_back(car);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(A[i]==0)
            {
                A[i]=1;
                car.push_back(nums[i]);
                recurr(nums,ans,car,A);
                A[i]=0;
                car.pop_back();
            }
        }
    }    
    
    
    
    
    
    
    
    
    
    
    
    
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> ans;
         vector<int>carrier;
        int n=nums.size();
        int marker[n];
        for(int i=0;i<nums.size();i++) marker[i]=0;
        recurr(nums,ans,carrier,marker);
        
        
        return ans;
        
        
    }
};