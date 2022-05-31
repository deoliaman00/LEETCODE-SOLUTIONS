class Solution {
public:
   // set<string>ans;
    // approach1
    
//     void substring(string s,string out,int k)
//     {
//         if(out.length()==k)
//         {
//             set.insert({out});
//             return;
//         }
        
//     }
    bool hasAllCodes(string s, int k) 
    {
        if(s.length()<pow(2,k)) return false;
        unordered_set<string>op;
        
        for(int i=0;i<=s.length()-k;i++)
        {
            op.insert({s.substr(i,k)});
        }
        
        for(auto i:op)
        {
            cout<<i<<" ";
        }
        if(op.size()==pow(2,k)) return true;
        
        
        
        return false;
        
        
    }
};