//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class DisjointSet{
    private:
    vector<int>rank,parent,size;
    public:
    DisjointSet(int n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i]=1;
        }
    }
    
    int findPar(int node)
    {
        if(node==parent[node])
        {
            return node;
        }
        return parent[node]=findPar(parent[node]);
    }
    void unionBySize(int u,int v)
    {
        int u_p=findPar(u);
        int v_p=findPar(v);
        if(u_p==v_p)
        {
            return;
        }
        if(size[u_p]<size[v_p])
        {
            parent[u_p]=v_p;
            size[v_p]+=size[u_p];
        }
        else
        {
            parent[v_p]=u_p;
            size[u_p] += size[v_p];
        }
    }
    void unionByRank(int u,int v)
    {
        int ultimate_u_parent=findPar(u);
        int ultimate_v_parent=findPar(v);
        if(ultimate_v_parent==ultimate_u_parent)
        {
            return;
        }
        if(rank[ultimate_v_parent]<rank[ultimate_u_parent])
        {
            parent[ultimate_v_parent]=ultimate_u_parent;
        }
        else if (rank[ultimate_v_parent] > rank[ultimate_u_parent])
        {
            parent[ultimate_u_parent]=ultimate_v_parent;
        }else{
            parent[ultimate_v_parent]=ultimate_u_parent;
            rank[ultimate_u_parent]++;
        }   
    }
};
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<pair<int,pair<int,int>>>qt;
        for(int i=0;i<V;i++)
        {
           for(auto it:adj[i])
           {
                int u=i;
                int v=it[0];
                int wt=it[1];
                qt.push_back({wt,{u,v}});
           }
        }
        
        sort(qt.begin(),qt.end());
        
        int n=qt.size();
        DisjointSet obj(n);
        int maxAns=0;
        for(auto it:qt)
        {
            int wt=it.first;
            int u=it.second.first;
            int v=it.second.second;
           
            if(obj.findPar(u)!=obj.findPar(v))
            {
                maxAns+=wt;
                obj.unionBySize(u,v);
            }
        }
        return maxAns;
        
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
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends