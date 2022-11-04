//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  // type solution 1
  bool bfs(int node,vector<int>&vis,vector<int>adj[])
  {
      queue<pair<int,int>>qt;
      qt.push({node,-1});
      vis[node]=1;
      while(!qt.empty())
      {
          int nt=qt.front().first;
          int ntPapa=qt.front().second;
          qt.pop();
          for(auto it:adj[nt])
          {
              if(vis[it]==0)
              {
                  qt.push({it,nt});
                  vis[it]=1;
              }
              else if(it!=ntPapa)
              {
                  return true;
              }
          }
      }
      
      return false;
  }
  
  //  lets talk dfs
  bool dfs(int node,int parent,vector<int>adj[],vector<int>&vis)
  {
      vis[node]=1;
      for(auto it:adj[node])
      { 
          if(vis[it]==0)
          {
               if(dfs(it,node,adj,vis)==true)return true;
          }
          else
          {
              if(parent!=it)return true;
          }
      }
      return false;
  }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<int>vis(V,0);
        vis[0]=1;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,-1,adj,vis)==true)
                {
                    return true;
                }
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