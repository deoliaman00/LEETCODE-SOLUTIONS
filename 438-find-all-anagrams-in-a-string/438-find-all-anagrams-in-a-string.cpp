class Solution {
public:
    vector<int> findAnagrams(string s, string p)
    { 
        if(s.length()<p.length()) return {};
        
        vector<int>ans;
        vector<int>check(26,0);
        vector<int>longcheck(26,0);
       
        for(int i=0;i<p.size();i++)
        {
            check[p[i]-'a']++;
            longcheck[s[i]-'a']++;
        }
        if(check==longcheck) ans.push_back(0);
        
        for(int i=p.size();i<s.size();i++)
        {
            longcheck[s[i]-'a']++;
            longcheck[s[i-p.size()]-'a']--;
            if(check==longcheck) ans.push_back(i-p.size()+1);
        }
        
        
        return ans;
    }
};