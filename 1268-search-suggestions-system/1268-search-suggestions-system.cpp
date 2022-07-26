class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        set<string> pSet(products.begin(), products.end());
        vector<vector<string>> ret;
        string word;
        for (char c : searchWord) {
            word.push_back(c);
            auto it = pSet.lower_bound(word);
            vector<string> prods;
            for (int i = 0; i < 3; i++, it++) {
                if (it == pSet.end() || it->substr(0, word.length()) != word) break;
                prods.push_back(*it);
            }
            ret.push_back(prods);
        }
        
        return ret;
    }
};