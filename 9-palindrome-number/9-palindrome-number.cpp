class Solution {
public:
    bool isPalindrome(int x) {
        
        int a=x;
        string a1=to_string(a);
        string b1=to_string(a);
        
        reverse(b1.begin(),b1.end());
        return a1==b1;
        
    }
};