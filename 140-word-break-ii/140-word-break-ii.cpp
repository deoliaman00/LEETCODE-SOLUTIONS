class Solution {
public:
    set<string>st;
    void f(string s,int i,string &curr,vector<string>&wor)
    {
        if(i==s.size())
        {
            curr.pop_back();
            wor.push_back(curr);
        }
        string trid="";
        for(int indx=i;indx<s.size();indx++)
        {
            trid.push_back(s[indx]);
            if(st.count(trid))
            {
                string a=curr+trid+" ";
                f(s,indx+1,a,wor);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) 
    {
        vector<string>ans;
        for(auto i:wordDict)
        {
            st.insert(i);
        }
        string curr="";
        int i=0;
        
        f(s,i,curr,ans);
        return ans;
        
    }
};