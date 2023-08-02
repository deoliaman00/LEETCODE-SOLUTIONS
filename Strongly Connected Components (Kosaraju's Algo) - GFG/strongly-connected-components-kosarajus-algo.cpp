//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(int i,vector<vector<int>>& adj,stack<int>&st, vector<int>&Vis)
	{
	    Vis[i]=1;
	    for(auto it:adj[i])
	    {
	        if(!Vis[it])
	        {
	            dfs(it,adj,st,Vis);
	        }
	    }
	    st.push(i);
	}
	
	void dfs2(int node,vector<int>adj[],vector<int>&vis)
	{
	    vis[node]=1;
	    for(auto it:adj[node])
	    {
	        if(!vis[it])
	        {
	              dfs2(it,adj,vis);
	        }
	    }
	}
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        stack<int>st;
        vector<int>Vis(V,0);
        // for getting the elements in a ending order of their 
        for(int i=0;i<V;i++)
        {
            if(!Vis[i])
            {
                dfs(i,adj,st,Vis);
            }
        }
        // for getting the elements in a ending order of their 
        vector<int>revAdj[V];
        for(int i=0;i<V;i++)
        {
            Vis[i]=0;
            for(auto it:adj[i])
            {
                revAdj[it].push_back(i);
            }
        }
        int count=0;
        while(!st.empty())
        {
            int node=st.top();
            st.pop();
            if(!Vis[node])
            {
                count++;
               	dfs2(node,revAdj,Vis);
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends