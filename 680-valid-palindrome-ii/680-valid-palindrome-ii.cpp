class Solution {
public:
    bool pallindrone(string s)
    {
        int i=0,j=s.size()-1;
        
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
    
    bool validPalindrome(string s)
    {
        // a b c v b b a 
        // idea is to not completely remove the element but to increase the count
        if(pallindrone(s)!=false)
        {
            return true;
        }
        
        int i=0,j=s.size()-1;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
            i++;
            j--;
            }
            else
            {
                return pallindrone(s.substr(i,j-i))||pallindrone(s.substr(i+1,j-i));
            }
            
        }
        return false;
        
        
    }
};