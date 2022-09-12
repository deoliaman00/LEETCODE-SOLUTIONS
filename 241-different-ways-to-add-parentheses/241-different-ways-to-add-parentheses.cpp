class Solution {
public:
    vector<int> f(string s)
    {
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+'|| s[i]=='-'|| s[i]=='*')
            {
                vector<int>a1=f(s.substr(0,i));
                vector<int>a2=f(s.substr(i+1));
                for(auto k:a1)
                {
                    for(auto l:a2)
                    {
                        if(s[i]=='+')
                        {
                            ans.push_back(k+l);
                        }
                        else if(s[i]=='-')
                        {
                            ans.push_back(k-l);
                        }
                        else
                        {
                            ans.push_back(k*l);
                        }
                    }
                }
            }
        }
        
        if(ans.size()==0)ans.push_back(stoi(s));
        
        return ans;
    }
    vector<int> diffWaysToCompute(string expression) 
    {
        return f(expression);
        
    }
};