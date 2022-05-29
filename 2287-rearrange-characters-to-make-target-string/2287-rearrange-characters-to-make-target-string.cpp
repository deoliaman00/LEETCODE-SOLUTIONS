class Solution {
public:
    int rearrangeCharacters(string s, string target)
    {
        int ans=INT_MAX;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;        
        
        for(auto i:s)
        {
         mp1[i]++;   
        }
        
        for(auto i:target)
        {
            mp2[i]++;
        }
        
        for(auto k:mp2)
        {
            ans=min(ans,mp1[k.first]/k.second);
        }
        return ans;
    }
};