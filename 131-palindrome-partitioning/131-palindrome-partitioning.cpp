class Solution {
public:
    
    bool pallin(int start,int end,string ss)
    {
        while(start<=end)
        {
            if(ss[start++]!=ss[end--])
            {
                
                return false;
            }
        }
        
        return true;
    }
    
    
    
    void callit(int indx,string s,vector<string>&dp,vector<vector<string>>&ans)
    {
        if(indx>=s.size())
        {
            ans.push_back(dp);
            return;
        }
        
        for(int k=indx;k<s.size();++k)
        {
            if(pallin(indx,k,s))
            {
                dp.push_back(s.substr(indx,k-indx+1));
                callit(k+1,s,dp,ans);
                dp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        int len=s.size();
        vector<vector<string>>ans;
        vector<string>dp;
        callit(0,s,dp,ans);
        return ans;
    }
};