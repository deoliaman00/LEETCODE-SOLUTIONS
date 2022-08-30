class Solution {
public:
    set<string>st;
    map<int,bool>mp;
    bool check(string s,int indx)
    {
        if(indx==s.size())return true;
        if(mp.count(indx))return mp[indx];
        for(int pos=indx;pos<s.size();pos++)
        {
            if(st.count(s.substr(indx,pos-indx+1))&& check(s,pos+1))
            {
                return mp[indx]=true;
            }
        }
        return  mp[indx]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) 
    {
        for(auto it:wordDict)
        {
            st.insert(it);
        }
        return check(s,0);// (string to test on ,starting indx)
        
    }
};