class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> a;
       set<int>ans(nums1.begin(),nums1.end());
        for(auto i:nums2)
        {
            if(ans.erase(i))
            {
                a.push_back(i);
            }  
        }
        return a;
    }
};