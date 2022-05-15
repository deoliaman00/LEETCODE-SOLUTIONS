// class Solution {
// public:
//     vector<string> removeAnagrams(vector<string>& words) 
//     {
//         int n=words.size();
//         vector<string>ans;
//         ans.push_back(words[0]);
                      
//         for(int i=1;i<n;i++)
//         {
//             string a=words[i];
//             sort(a.begin(),a.end());
//             string b=ans.back();
//             sort(b.begin(),b.end());
//             if(a!=b)
//             {
//                 ans.push_back(words[i]);
//             }
            
//         }
        
//         return ans;
        
//     }
// };

//approach2
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) 
    {
        vector<string>res;
        
        set<string>st;
        
        
        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            
            sort(temp.begin(),temp.end());
            
            if(st.find(temp)!=st.end())
            {
                continue;
            }
            
            else
            {
                res.push_back(words[i]);
                
                st.erase(st.begin(),st.end()); // esss pure code ki jaaaaaaaaaaaaaaaaaaaan
                
                st.insert(temp);
            }
        }
        
        
        
        return res;
        
    }
};