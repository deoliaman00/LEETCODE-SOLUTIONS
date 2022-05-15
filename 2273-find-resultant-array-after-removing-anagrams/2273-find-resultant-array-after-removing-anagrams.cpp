class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) 
    {
vector<string>res;
        set<string>st;
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            sort(temp.begin(),temp.end());
            if(st.count(temp)){
                continue;
            }
            else{
                res.push_back(words[i]);
                st.erase(st.begin(),st.end());
                st.insert(temp);
            }
        }
        return res;
        
    }
};