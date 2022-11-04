class Solution {
public:
    bool check(char c)
    {
        if(c=='a'|| c=='e'|| c=='i'|| c=='o'||c=='u'||c=='A'|| c=='E'||c=='I'||c=='O'||c=='U')return true;
    
        return false;
    }
    string reverseVowels(string s) 
    {
        int N=s.size();
        int start=0,end=s.size()-1;
        while(start<end)
        {
            while(start<N && check(s[start])==false)
            {
                start++;
            }
            while(end>=0 && check(s[end])==false)
            {
                end--;
            }
            if(start<end)
            {
                swap(s[start++],s[end--]);
            }
        }
        return s;
        
    }
};