//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) 
    {
        vector<int>revadj[V];
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
            {
                revadj[it].push_back(i);
                indegree[i]++;
            }
        }
        
        queue<int> qt;

        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                qt.push(i);
            }
        }
        vector<int> ans;
        while (!qt.empty())
        {
            int node = qt.front();
            qt.pop();
            ans.push_back(node);
            for (auto it : revadj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                {
                    qt.push(it);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
     
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends