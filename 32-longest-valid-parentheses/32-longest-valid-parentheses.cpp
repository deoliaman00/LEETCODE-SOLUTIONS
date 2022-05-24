class Solution {
public:
    int longestValidParentheses(string s) 
    {
        int maxi=0;
        stack<int> a;
        a.push(-1);
        int n=s.length();
        if(s=="") return 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                a.push(i);
            }
            else
            {
                a.pop();
                if(a.empty())
                {
                    a.push(i);
                }
                else
                {
                    int len=i-a.top();
                    maxi=max(len,maxi);
                }
            }
        }
        
        return maxi;
    }
};