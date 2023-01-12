//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool bfs(int src,int V,vector<int>adj[],int vis[])
    {
        vis[src]=1;
        queue<pair<int,int>>qt;
        qt.push({src,-1});
        while(!qt.empty())
        {
            int node=qt.front().first;
            int parent=qt.front().second;
            qt.pop();
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    qt.push({it,node});
                }
                else
                {
                    if(parent!=it)return true;
                }
            }
        }
        return false;
        
        
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        
        int visited[V]={0};
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(bfs(i,V,adj,visited)==true)return true;
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