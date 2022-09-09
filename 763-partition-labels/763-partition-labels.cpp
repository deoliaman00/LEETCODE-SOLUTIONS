class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]=i;
        }
        int maxi=INT_MIN;
        vector<int>ans;
        int sI=0,mI=0;
        for(int i=0;i<s.size();i++)
        {
            mI=max(mI,mp[s[i]]);
            if(i==mI)
            {
                ans.push_back(mI-sI+1);
                sI=i+1;
            }
        }
        
        return ans;
        
    }
};