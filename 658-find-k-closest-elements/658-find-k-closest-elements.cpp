class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        int n=arr.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(make_pair(abs(arr[i]-x),arr[i]));
        }
        while(pq.size()>k)
        {
            pq.pop();
        }
        vector<int>Ans;
      while(!pq.empty())
        {
            Ans.push_back(pq.top().second);
            pq.pop();  
      }
        sort(Ans.begin(),Ans.end());
        return Ans;
        
    }
};