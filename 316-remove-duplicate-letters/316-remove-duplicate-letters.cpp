class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        vector<int> check(26,0);
        vector<int> cc(26,0);
        string ans;
        stack<char> stk;
        for(int i=0;i<s.size();i++)
        {
            check[s[i]-'a']++;
        }
        
        
        for(int i=0;i<s.size();i++)
        {
            check[s[i]-'a']--;
            // DECREMENTING THE ELEMENT FROM THE CHECK--ARRAY SO THAT WE KNOW WE HAVE USED IT
            
            if(cc[s[i]-'a']==0)
            {
                while(stk.size()>0 && stk.top()>s[i] && check[stk.top()-'a']>0 )
                {
                    // STORING THE ELEMENT THAT WE NEED TO POP OUT AND STORING IT INTO TEMP
                    char temp=stk.top();
                    // NOW DECREMENTING IT SO THAT ITS PRESENCE IS THERE
                    cc[temp-'a']=0;
                    stk.pop();
                    
                }
                stk.push(s[i]);
                cc[s[i]-'a']=1;
            }
            
        }
        
        
       while(!stk.empty())
       {
           ans.push_back(stk.top());
           stk.pop();
       }
        
        reverse(ans.begin(),ans.end());
        
        
        return ans;
  }
};