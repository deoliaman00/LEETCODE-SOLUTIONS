class Solution {
public:
    int longestPalindrome(vector<string>& words)
    {
         unordered_map<string,int> umap;
        
        int res = 0;
        int neq = 0;
        for ( string s : words){
            string s2;
            s2.push_back(s[1]);
            s2.push_back(s[0]);
            
            bool equal = s[0] == s[1];
            if ( equal ) neq++;
            
            if ( umap.find(s) == umap.end()){
                umap[s2]++;
            }
            else{
                
                if ( umap[s] > 0 ){
                    umap[s]--;
                    res+=4;
                    if ( equal ) neq-=2;
                }
                else{
                    umap[s2]++;
                }
            }
                
        }
        
        if ( neq > 0) res+=2;
        return res;
        
    }
};