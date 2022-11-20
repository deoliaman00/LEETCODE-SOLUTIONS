//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool dfs(vector<int>adj[],int vis[],int Previs[],int check[],int node)
  {
      // on coming inside the dfs loop function
      vis[node]=1;
      Previs[node]=1;
      check[node]=0;
      for(auto it:adj[node])
      {
          if(!vis[it])
          {
              if(dfs(adj,vis,Previs,check,it)==true)
              {
                  check[it]=0;
                  return true;// cycle encountered so cancel the change
              }
                  
          }
          else if(Previs[it]!=0)
          {   check[it]=0;
              return true;// cycle encountered so cancel the change
          }
      }
      // if the above whole loop has been done and dusted so now we need to mark it as the non cycle node
      check[node]=1;
      Previs[node]=0;// change the status here too
      return false;// at last returning the result that no cycle existed.
  }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) 
    {
        // so now the method to solve this question is that 
        // first we make sure we get all the nodes that are in the cycle
        // the special case over here is that it is a directed graph so ]
        // we have to use a little differnt method
        
        // step1:-
        // checking the node and the cycles
        int vis[V]={0};
        int Previs[V]={0};
        int check[V]={0};
        vector<int>ansV;
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(adj,vis,Previs,check,i);
                
            }
        }
        
        for(int i=0;i<V;i++)
        {
            if(check[i]==1){
                ansV.push_back(i);
            }
        }
        
        
        
        return ansV;
        
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