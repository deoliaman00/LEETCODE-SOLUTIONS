class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
      priority_queue<pair<int,int>  ,vector<pair<int,int>> , greater<pair<int,int>>> minheap;
        vector<int> ans;
    unordered_map<int,int> hashmp;
        for(auto i:nums)
        {
            hashmp[i]++;
            
        }
        
        for(auto i:hashmp)
        {
            minheap.push({i.second,i.first});
            if(minheap.size()>k)
                minheap.pop();
            
        }
        
        while(k--)
        {
            ans.push_back(minheap.top().second);
            minheap.pop();
                
        
        }
        
        
        return ans;
    }
};