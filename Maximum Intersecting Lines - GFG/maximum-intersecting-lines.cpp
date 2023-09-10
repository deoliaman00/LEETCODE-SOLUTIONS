//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        // line sweep algorithm 
        map<int,int>mp;
        for(int i=0;i<N;i++)
        {
            int lb=lines[i][0];
            int hb=lines[i][1];
            mp[lb]+=1;
            mp[hb+1]-=1;
        }
        int maxi=INT_MIN;
        int preSum=0;
        for(auto it:mp)
        {
            preSum+=it.second;
            maxi=max(maxi,preSum);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends