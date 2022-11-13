class Solution {
public:
    string reverseWords(string s) 
    {
        stack<string>str;
        string t="";
        int N=s.size();
        for(int i=0;i<N;i++)
        {
            if(s[i]!=' ')
            {
                t+=s[i];
            }
            if(t.size()>0 && (s[i]==' '|| i==N-1))
            {
                str.push(t);
                t="";
            }
        }
        
        int i=1;
        
        while(!str.empty())
        {
            if(i==1)
            {
                t+=str.top();
                str.pop();
            }else
            {
                t+=" ";
                t+=str.top();
                str.pop();
            }
            i++;
        }
        
        return t;
    }
};