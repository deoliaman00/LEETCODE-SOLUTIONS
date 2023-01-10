//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(int node,vector<int>adjA[],int V,int vis[])
  {
      vis[node]=1;
      for(auto it:adjA[node])
      {
          if(!vis[it])
          {
              dfs(it,adjA,V,vis);
          }
      }
  }
  int count=0;
  void func(vector<int>adjA[],int V)
  {
      int vis[V]={0};
      for(int i=0;i<V;i++)
      {
          if(!vis[i])
          { 
             dfs(i,adjA,V,vis);
             count++;
          } 
      }
  }
    int numProvinces(vector<vector<int>> adj, int V)
    {
        vector<int>adjA[V];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j]==1 && i!=j)
                {
                    adjA[i].push_back(j);
                    adjA[j].push_back(i);
                }
            }
        }
        
        func(adjA,V);
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends