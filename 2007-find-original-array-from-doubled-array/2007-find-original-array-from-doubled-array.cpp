class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) 
    {
        
        
        map<int,int>mp;
        vector<int>ans;
        if(changed.size()%2==1)return {};
        
        for(auto i:changed)
        {
            mp[i]++;
        }
        sort(changed.begin(),changed.end());
        for(auto t:changed)
        {
            if(mp[t]==0)
            {
                continue;
            }
            if(mp[2*t]==0)
            {
               return {};
            }
            if(mp[t] && mp[2*t])
            {
                mp[2*t]--;
                ans.push_back(t);
                mp[t]--;
            }
        }
        return ans;
    }
};

/*
Input: changed = [1,3,4,2,6,8]
Output: [1,3,4]
Explanation: One possible original array could be [1,3,4]:
- Twice the value of 1 is 1 * 2 = 2.
- Twice the value of 3 is 3 * 2 = 6.
- Twice the value of 4 is 4 * 2 = 8.
Other original arrays could be [4,3,1] or [3,1,4].
*/
