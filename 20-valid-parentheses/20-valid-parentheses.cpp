class Solution {
public:
    bool isValid(string sf)
    {
        int N=sf.length();
        if(N==1)
        {return false;}
        stack<char>s;
        for(int i=0;i<N;i++)
        {
            if(sf[i]=='('||sf[i]=='['||sf[i]=='{')
            {
                s.push(sf[i]);
            }
            else
            {
                if(s.empty()==true)
                {
                    return false;
                }
                else if(sf[i]==')' && s.top()=='(')
                {
                    s.pop();
                }
                else if(sf[i]=='}' && s.top()=='{')
                {
                    s.pop();
                }
                else if(sf[i]==']' && s.top()=='[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }

            }
        }
        cout<<s.size();
        return ((s.empty()==true)?true:false);
    }
};
/*
Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false

*/
