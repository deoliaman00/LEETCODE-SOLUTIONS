//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
  bool dfs(int src,int part,int V,vector<int>adj[],int vis[])
  {
      vis[src]=true;
      for(auto it:adj[src])
      {
          if(!vis[it])
          {
              vis[it]=1;
             if(dfs(it,src,V,adj,vis)==true)return true;
          }
          else if(it!=part)
          {
              return true;
          }
      }
      return false;
  }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        int visited[V]={0};
        visited[0]=1;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(dfs(i,-1,V,adj,visited)==true)return true;
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