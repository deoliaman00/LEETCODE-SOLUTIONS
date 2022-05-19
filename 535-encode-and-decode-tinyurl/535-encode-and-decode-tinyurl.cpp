class Solution {
public:
    map<string, string> mp;
    int cnt = 1;
    
    string encode(string longUrl) {
        string ans = to_string(cnt);
        mp[ans] = longUrl;
        cnt++;
        return ans;
    }
    
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};