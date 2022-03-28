class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        vector<int>checker(26,0);
        vector<bool>cc(26,0);
        stack<char>st;
        string ans;
        // test case1:-  c b e a c d c b c
        // marking all the alphabets into the hashmap
        for(int i=0;i<s.size();i++)
        {
         checker[s[i]-'a']++;   
        }
        // checker:-     a-1  b-1  c-4  d-1  e-1
        
        
        for(int i=0;i<s.size();i++)
        {
         checker[s[i]-'a']--;  //DECREASINGTHECOUNT
            // we will take the font and now we are using it so we will discuss it
            
            // we will check 
            if(cc[s[i]-'a']==0) //AGR ELEMENT EXIST JRTA HAI YA NHI
            {
               while(st.size()>0  &&  st.top()>s[i] && checker[st.top()-'a']>0)
               {
                   char rem=st.top();
                   st.pop();
                   cc[rem-'a']=0;
                   
               }
                st.push(s[i]);
                cc[s[i]-'a']=1;
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
        
        
        
        
    }
};