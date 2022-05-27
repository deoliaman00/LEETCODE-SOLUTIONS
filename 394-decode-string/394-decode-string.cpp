class Solution {
public:
    string decodeString(string s)
    {
        stack<int>numStack;
        stack<string>strStack;
        int number=0;
        string word="";
        for(auto i:s)
        {
            if(isdigit(i))
            {
                number=number*10+(i-'0');
            }
            else if(i=='[')
            {
                strStack.push(word);            
                word="";
                numStack.push(number);
                number=0;
                
            }
            else if(isalnum(i))
            {
                word+=i;
            }
            else
            {
                string dublicate=strStack.top();
                strStack.pop();
                int k=numStack.top(); numStack.pop();
                while(k--)
                {
                    dublicate+=word;
                }
                
                word=dublicate;
                
            }
        }
        return word;
    }
};