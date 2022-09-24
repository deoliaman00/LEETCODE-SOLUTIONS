class Solution {
public:
    bool wordPattern(string p, string s) 
    {
       vector<string>arr;
        int i=0;
        string temp="";
        while(i<s.size())
        {
            if(s[i]==' ')
            {
                arr.push_back(temp);
                temp="";
            }
            else
            {
                temp+=s[i];
               
            }
             i++;
        }
        arr.push_back(temp);
        if(p.size()!=arr.size())return false;
        set<string>st;
        unordered_map<char,string>mp;
        
        for(int i=0;i<p.size();i++)
        {
            if(mp.find(p[i])!=mp.end())
            {
                if(mp[p[i]]!=arr[i])
                {
                    return false;
                }
            }
            else
            {
                if(st.count(arr[i])>0)
                {
                    return false;
                }
                mp[p[i]]=arr[i];
                st.insert(arr[i]);
            }
        }
        
        return true;
    }
};

/*
Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"
Output: false
Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false

*/
