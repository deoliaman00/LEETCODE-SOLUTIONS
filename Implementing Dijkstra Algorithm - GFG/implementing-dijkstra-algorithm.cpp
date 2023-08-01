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
        vector<int>p(V);
        vector<int>c(V,1e9);
        for(int i=0;i<V;i++)p[i]=i;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        pq.push({0,S});
        
        c[S]=0;
        while(!pq.empty())
        {
            auto iu=pq.top();
            int node=iu.second;
            int cost=iu.first;
            pq.pop();
            for(auto pk:adj[node])
            {
                int newNode=pk[0];
                int newCost=pk[1]+cost;
                if(c[newNode]>newCost)
                {
                    c[newNode]=newCost;
                    p[newNode]=node;
                    pq.push({newCost,newNode});
                }
            }
        }
        return c;
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