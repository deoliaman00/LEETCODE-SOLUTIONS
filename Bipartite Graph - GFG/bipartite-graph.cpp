//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    bool is(int q,int V, vector<int>adj[],int col[])
	{
	   
	    col[q]=0;
	    queue<int>qt;
	    qt.push(q);
	    while(!qt.empty())
	    {
	        int node=qt.front();
	        qt.pop();
	        for(auto it:adj[node])
	        {
	            if(col[it]==-1){
	                col[it]=!col[node];
	                qt.push(it);
	            }
	            else if(col[node]==col[it])
	            {
	                return false;
	            }
	            
	        }
	    }
	    
	    return true;
	    
	}
public:
	bool isBipartite(int V, vector<int>adj[])
	{
	    int col[V];
	    for(int i=0;i<V;i++){
	        col[i]=-1;
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(col[i]==-1)
	        {
	            if(is(i,V,adj,col)==false)
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