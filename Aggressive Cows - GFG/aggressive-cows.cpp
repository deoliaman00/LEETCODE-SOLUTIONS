//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int func(vector<int> stalls, int i, int k)
    {
        /*
        cows=>k
        i=>limit required minimum to be held
        at last check whether we were able to take all cows
        */
        int limit = i;
        int cows = k;
        int curr = 1;
        int last = stalls[0];
        for (int i = 1; i < stalls.size(); i++)
        {
            if (stalls[i] - last >= limit)
            {
                last = stalls[i];
                curr++;
            }
        }
        return curr;
    }
    int solve(int n, int k, vector<int> &stalls)
    {
        sort(stalls.begin(),stalls.end());
        int limit=stalls[n-1]-stalls[0];
        int low=1;
        while(low<=limit)
        {
            int mid=(low+limit)>>1;
            if(func(stalls,mid,k)>=k)
            {
                low=mid+1;
            }
            else
            {
                limit=mid-1;
            }
        }
        return limit;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends