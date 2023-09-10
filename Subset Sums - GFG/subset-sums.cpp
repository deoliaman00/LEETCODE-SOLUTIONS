//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(int i,vector<int>&ans,vector<int>&arr,int sum)
    {
        if(i>=arr.size())
        {
            ans.push_back(sum);
            return;
        }
        
        solve(i+1,ans,arr,sum+arr[i]);
        
        solve(i+1,ans,arr,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        solve(0,ans,arr,0);
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends