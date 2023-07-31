//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

    bool bfs(int node,vector<int>adj[],int V,vector<int>&color)
    {
       
	    queue<int>qt;
	    qt.push(node);
	    
	    color[node]=0;
	    while(!qt.empty())
	    {
	        int node=qt.front();
	        qt.pop();
	        for(auto it:adj[node])
	        {
	            if(color[it]==-1)
	            {
	                color[it]=(color[node]==0?1:0);
	                 qt.push(it);
	            }
	            else if(color[it]==color[node])
	            {
	                 return false;
	            }
	          
	        }
	    }
	    return true;
    }
	bool isBipartite(int V, vector<int>adj[])
	{
	    vector<int>color(V,-1);
	    for(int i=0;i<V;i++)
	    {
	        if(color[i]==-1)
	        {
	            if(bfs(i,adj,V,color)==false)
	            {
	                return false;
	            }
	        }
	    }
	    return true;
	   
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends