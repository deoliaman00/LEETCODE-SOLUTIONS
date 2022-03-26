class Solution {
public:
    bool isAnagram(string s, string t)
    { 
         int A[27]={0};
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2) return false;
        
        for(int i=0;i<n1;i++)
        {
            A[s[i] - 'a']++;
            A[t[i] -'a']--;
        }
       
        for(int i=0;i<26;i++)
        {
            if(A[i]!=0) return false;
        }
        return true;
        
        
    }
};