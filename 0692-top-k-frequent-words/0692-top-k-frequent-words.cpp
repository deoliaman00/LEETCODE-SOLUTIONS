class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> freq;
        priority_queue<pair<int,string>> pq;
        
        // count frequency of each word
        for(auto w:words){
            freq[w]++;
        }
        
        // insert each unique word into max-heap based on there frequecy
        for(auto it:freq) pq.push({it.second,it.first});
        vector<string> res;
        
        // insert all words inorder highest to lowest into the priority queue insack of lexicographically order sorting of same frequency words
        for(int i=0;i<freq.size();i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        // sort same frequecy words
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res.size()-1;j++){
                if(res[j] > res[j+1] && freq[res[j]] == freq[res[j+1]]) swap(res[j],res[j+1]);
            }
        }
        
        vector<string> res2;
        
        // insert top k frequency words into your answer vector
        for(int j=0;j<k;j++){
            res2.push_back(res[j]);
        }
        
        return res2;
    }
};