class Solution {
public:
   const int mod = (int)1e9 + 7;
    int helper(int n, char i, unordered_map<char,vector<char>>& vc,vector<vector<long long>>& dp){
        if(n==0) return 1;
        if (dp[n][i-'a']!=0) return dp[n][i-'a']%mod;
        for(int j=0;j<vc[i].size();j++){
            dp[n][i-'a']+=(helper(n-1,vc[i][j],vc,dp))%mod;
        }
        return dp[n][i-'a']%mod;
    }
    
    int countVowelPermutation(int n) {
        unordered_map<char,vector<char>> vc;
        vc['a'].push_back('e');
        vc['e'].push_back('a');vc['e'].push_back('i');
        vc['i'].push_back('a');vc['i'].push_back('e');vc['i'].push_back('o');vc['i'].push_back('u');
        vc['o'].push_back('i');vc['o'].push_back('u');
        vc['u'].push_back('a');        
        vector<vector<long long>> dp(n+1,vector<long long>(26,0));
        long long c=0;
        for(auto it = vc.begin();it!=vc.end();it++){
            dp[n][it->first-'a']+=(helper(n-1,it->first,vc,dp))%mod;
            c += (dp[n][it->first-'a'])%mod;
        }
        return c%mod;
    }
};