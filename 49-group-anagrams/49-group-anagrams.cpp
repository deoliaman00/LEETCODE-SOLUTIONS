class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        //.. we will use unordered map for 0(1) complexities
        unordered_map<string,vector<string>>judging;
        // juding map will see who gets same anagram
        
        for(auto i:strs)
        {
            string f=i;
            sort(f.begin(),f.end());
            judging[f].push_back(i);
        }
         vector<vector<string>> group;
        for(auto i:judging)
        {
            group.push_back(i.second);
        }
        
        return group;
     
        
    }
};