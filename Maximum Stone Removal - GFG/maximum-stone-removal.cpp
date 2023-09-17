//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
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
class Solution {
  public:
    int maxRemove(vector<vector<int>>& stones, int n) {
       // total no of stones available =n
       
       int nx=0,ny=0;
       for(auto it:stones)
       {
           nx=max(nx,it[0]);
           ny=max(ny,it[1]);
       }
       int totalNode=nx+ny;
       
       DisjointSet obj(totalNode+1);
       unordered_map<int,int>mp;
       for(auto it:stones)
       {
           int rowNo=it[0];
           int colNo=it[1];
           colNo=colNo+nx+1;
           obj.unionBySize(rowNo,colNo);
           mp[rowNo]=1;
           mp[colNo]=1;
       }
       int ct=0;
       for(auto it:mp)
       {
           if(obj.findPar(it.first)==it.first)
           {
               ct++;
           }
       }
       
       return n-ct;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < 2; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;

        cout << obj.maxRemove(adj, n) << "\n";
    }
}
// } Driver Code Ends