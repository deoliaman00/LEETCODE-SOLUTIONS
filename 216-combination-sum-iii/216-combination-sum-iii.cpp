class Solution {
public:
    
 vector<vector<int>>res;
    void dfs(vector<int>& A, vector<int>& prefix, int sum, int idx, int k, int n)
    {
        if(prefix.size()==k and sum==n) {res.push_back(prefix);return;}
        if(sum>n) return;
        for(int i=idx ; i<A.size() ; i++)
        {
            prefix.push_back(A[i]);
            dfs(A,prefix,sum+A[i],i+1,k,n);
            prefix.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>A,prefix;
        for(int i=1 ; i<=9 ; i++) A.push_back(i);
        dfs(A,prefix,0,0,k,n);
        return res;
    }
};