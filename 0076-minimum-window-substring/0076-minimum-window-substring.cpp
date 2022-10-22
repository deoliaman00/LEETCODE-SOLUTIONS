


 const int len=256;
class Solution {
public:
    
    string minWindow(string s, string p)
    {
    
   
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
        string a="";
        int len1=s.length();
        int len2=p.length();
        if(s.length()<p.length())
        {
            return a;
        }
        int hash_p[len]={0};
        int hash_s[len]={0};
        for(int i=0;i<len2;i++)
        {
            hash_p[p[i]]++;
        }
        int count=0;
        
        int start=0,start_indx=-1,mini_len=INT_MAX;
        
        for(int j=0;j<len1;j++)
        {
        
            hash_s[s[j]]++; // turning on the active numbers
            // case1: if the number occurence in hash is same as in hash_p
        
            if(hash_s[s[j]]<=hash_p[s[j]])
            {
                count++;
            }
            if(count==len2)
            {
              //  now we found the window
            //    we will minimise from the front
                while(hash_s[s[start]] > hash_p[s[start]] || hash_p[s[start]]==0)
                {
                    if(hash_s[s[start]] > hash_p[s[start]])
                    {
                        hash_s[s[start]]--;
                       // here we are increasing/cleaning the front string to out substring
                        
                    }
                     start++; 
                    
                }
                int new_Window=j-start+1; // j is the stage at which len==count..and start at which from now the string will start
                
                if(mini_len>new_Window)
                {
                    mini_len=new_Window;
                    start_indx=start;
                }
            }
        }
        
        if(start_indx==-1)
        {
            return a;
        }
        
        return s.substr(start_indx,mini_len);
        // Your code here
        

        
    }
};