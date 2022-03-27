class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        // TO REDUCE THE I/O OPERATIONS 
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
        
        // WE WILL BE USING UNORDERED MAP SP THAT THE RUNTIME WILL BE LESS
        unordered_map<string,vector<string>> checker;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            checker[strs[i]].push_back(temp);
           // checker.insert(strs[i],temp);
        }
        vector<vector<string>> a;
        for(auto itr=checker.begin();itr!=checker.end();++itr)
        {
         a.push_back(itr->second);   
        }
        
        return a;
       
        
    }
};
