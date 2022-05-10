class Solution {
public:
    
 vector<vector<int>>res;
    void dfs(vector<int>& arr, vector<int>& prefix, int sum, int idx, int k, int n)
    {
        if(prefix.size()==k and sum==n) {res.push_back(prefix);return;}
        if(sum>n) return;
        for(int i=idx ; i<arr.size() ; i++)
        {
            prefix.push_back(arr[i]);
            dfs(arr,prefix,sum+arr[i],i+1,k,n);
            prefix.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr,prefix;
        for(int i=1 ; i<=9 ; i++) arr.push_back(i);
        dfs(arr,prefix,0,0,k,n);
        return res;
    }
};