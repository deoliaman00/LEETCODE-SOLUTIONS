class Solution {
public:
    unordered_map<char,vector<string>> list{
        {'2',{"a","b","c"}},
        {'3',{"d","e","f"}},
        {'4',{"g","h","i"}},
        {'5',{"j","k","l"}},
        {'6',{"m","n","o"}},
        {'7',{"p","q","r","s"}},
        {'8',{"t","u","v"}},
        {'9',{"w","x","y","z"}}
    };
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return {};    // This represents empty vector
        if(digits.size()==1)
            return list[digits[0]];
        
        vector<string> recursion_answer = letterCombinations(digits.substr(1));
        vector<string> finalAns;
        vector<string> curr_number_vector=list[digits[0]];
        int i,n=recursion_answer.size(),j;
        for(i=0;i<curr_number_vector.size();i++){
            
            for(j=0;j<recursion_answer.size();j++){
                string temp=curr_number_vector[i]+recursion_answer[j];
                finalAns.push_back(temp);
            }
        }
        return finalAns;
    }
};