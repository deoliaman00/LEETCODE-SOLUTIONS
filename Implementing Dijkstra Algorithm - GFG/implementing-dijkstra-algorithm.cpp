//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int>dp(V);
        for(int i=0;i<V;i++){
            dp[i]=1e9;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>hep;
        dp[S]=0;
        // {cost,node}
        // 2->2--->costs 0  0->0--->costs 0
        hep.push({0,S});
        while(!hep.empty())
        {
          int cost=hep.top().first;
          int node=hep.top().second;
          hep.pop();
          for(auto it:adj[node])
          {
              int cost2=it[1]+cost;
              int node=it[0];
              if(dp[node]>cost2)
              {
                  dp[node]=cost2;
                  hep.push({cost2,node});
                  
              }
          }
        }
        return dp;
        
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends