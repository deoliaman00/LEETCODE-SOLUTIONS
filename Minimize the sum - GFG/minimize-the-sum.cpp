//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto it:arr)
        {
            pq.push(it);
        }
        int sum=0;
        while(pq.size()!=1)
        {
            int ele=pq.top();
            pq.pop();
            int ele2=pq.top();
            pq.pop();
            pq.push(ele+ele2);
          //  cout<<ele<<" "<<ele2<<endl;
            sum+=ele+ele2;
        }
        
       
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends