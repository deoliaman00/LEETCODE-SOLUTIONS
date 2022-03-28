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
                // dekh bhai agr stack ka size bda hoga '0' se tho koi element hai yani andr
                // hume ye check krna hae ki jo element ham insert s[i] krne vale hein kia uske andr jo elemet hai vo
                // bda hai ya chota agr chota tb while ni chlega and sahi ho jaega
                // vrna chlega while and ye bi check hoga ki
                // kahi element unique tho nahi hai kuki future mae exist krna chye agr uski prefernce badani hai 
                // jese ki agr e occurs 1 time then if we will decrement it thgis might not help
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
