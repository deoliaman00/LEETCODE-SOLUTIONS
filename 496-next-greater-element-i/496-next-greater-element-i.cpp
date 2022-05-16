class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        //  [4,1,2], nums2 = [1,3,4,2]
        vector<int>ans;
        stack<int>check;
        unordered_map<int,int>mp;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            if(check.empty())
            {
               mp[nums2[i]]=-1; // eg-> (2,-1) -> (4,-1)-> (3,4)-> (1,3)
            }
            else if(check.top()>nums2[i])
            {
                mp[nums2[i]]=check.top();
            }
            else
            {
                while(!check.empty() && check.top()<nums2[i])
                {
                    check.pop();
                }
                if(check.size()==0)
                {
                    mp[nums2[i]]=-1;
                }
                else
                {
                    mp[nums2[i]]=check.top();    
                }
            }
            
        check.push(nums2[i]);
            
        }
        
        for(auto &i:nums1)
        {
            ans.push_back(mp[i]);
        }
        
       // reverse(ans.begin(),ans.end());
        return ans;
        
    }
};