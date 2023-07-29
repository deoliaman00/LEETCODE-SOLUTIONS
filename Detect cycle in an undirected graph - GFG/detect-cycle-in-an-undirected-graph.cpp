//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool bfs(int node,vector<int>adj[],vector<int>&vis,int N)
    {
        vis[node]=1;
        queue<pair<int,int>>qt;
        qt.push(make_pair(node,-1));
        
        while(!qt.empty())
        {
            auto it=qt.front();
            int child=it.first;
            int parent=it.second;
            qt.pop();
            
            for(auto curr:adj[child])
            {
                if(!vis[curr])
                {
                    vis[curr]=1;
                    qt.push(make_pair(curr,child));
                }
                else if(curr!=parent)
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(bfs(i,adj,vis,V)==true)return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends