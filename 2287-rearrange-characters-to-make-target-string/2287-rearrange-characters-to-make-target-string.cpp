class Solution {
public:
    int rearrangeCharacters(string s, string target) 
    {
       int ans = 1e9;
        unordered_map<char,int> mp1,mp2;
        for(auto it:s) mp1[it]++;
        for(auto it:target) mp2[it]++;
        for(auto it:mp2){
            ans = min(ans,mp1[it.first] / it.second);
        } 
        return ans;
        
        
    }
};