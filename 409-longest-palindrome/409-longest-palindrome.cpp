class Solution {
public:
    int longestPalindrome(string s)
    {
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int ans=0,odd=0;
        for(auto i:mp)
        {
            if(i.second%2==0)
            {
                ans+=i.second;
            }
            else
            {
                ans+=i.second-1;
                odd=1;
            }
        }
        return ans+odd;
        
    }
};