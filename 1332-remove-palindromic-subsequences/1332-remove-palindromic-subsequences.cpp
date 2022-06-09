class Solution {
public:
    int removePalindromeSub(string s)
    {
        string p=s;
        reverse(p.begin(),p.end());
        int i=s.length();
        if(i==0)return 0;
        else if(s==p)return 1;
        else
            return 2;
    }
};