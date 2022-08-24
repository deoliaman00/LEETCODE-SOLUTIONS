class Solution {
public:
    int memo[2001];
    
    bool isPalindrome(int i, int j, string &s)
    {
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
    
    int recur(string &s, int index)
    {
        if(index == s.length())
        {
            return 0;
        }
        
        if(memo[index] != -1)
        {
            return memo[index];
        }
        
        int minCost=1e8;
        
        for(int j=index; j<s.length(); j++)
        {
            int cost=1e8;
            if(isPalindrome(index, j, s))
            {
                cost = 1+recur(s, j+1);
            }
            minCost = min(minCost, cost);
        }
        
        return memo[index] = minCost;
        
    }
    
    int minCut(string s) {
        memset(memo, -1, sizeof(memo));
        
        return recur(s, 0)-1;
    }
};