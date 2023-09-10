//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    
    int lowerBound(vector<int>arr,int m,int ele)
    {
        int ans=m;
        int low=0;
        int high=m-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]>=ele)
            {
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> findMaxRow(vector<vector<int>> matrix, int N) {
       int n=N;
       int m=matrix[0].size();
       int cnt_max = 0;
        int index = 0;
    
        //traverse the rows:
        for (int i = 0; i < n; i++) {
            // get the number of 1's:
            int cnt_ones = m - lowerBound(matrix[i], m, 1);
            if (cnt_ones > cnt_max) {
                cnt_max = cnt_ones;
                index = i;
            }
        }
        return {index,cnt_max};
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends