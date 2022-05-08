class Solution
{
public:
    bool isValid(string s)
    {

     stack<char>st;
     int size = s.size();
     for(int i=0;i<size ;i++)
     {
       if(s[i]=='('|| s[i]=='{' || s[i]=='[') st.push(s[i]);
     else
     {
     if(st.empty()) return 0;
     else if(s[i]==')' && st.top()=='(') st.pop();
     else if(s[i]=='}' && st.top()=='{') st.pop();
     else if(s[i]==']' && st.top()=='[') st.pop();
     else return 0;
     }
     }
     return (st.empty()) ;
     }
};
        
