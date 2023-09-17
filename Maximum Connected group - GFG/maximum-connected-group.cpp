//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class DisjointSet{
    public:
    vector<int>rank,parent,size;
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
    int MaxConnection(vector<vector<int>>& grid) {
        int maxiTotal=0;
        int n=grid.size();
        DisjointSet obj(n*n);
        int X[]={0,-1,0,1};
        int Y[]={-1,0,1,0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    for(int l=0;l<4;l++)
                    {
                        int nx=i+X[l];
                        int ny=j+Y[l];
                        if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]==1)
                        {
                            int one=i*n+j;
                            int two=nx*n+ny;
                            obj.unionBySize(one,two);
                        }
                        
                    }
                }else{
                    continue;
                }
            }
        }
        
        // after connecting all the 1's with each other 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                set<int>st;
                if(grid[i][j]==0)
                {
                    for(int l=0;l<4;l++)
                    {
                        int nx=i+X[l];
                        int ny=j+Y[l];
                        if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]==1)
                        {
                            int nodeMade=nx*n+ny;
                            int parent=obj.findPar(nodeMade);
                            st.insert(parent);
                        }
                    }
                }else{
                    continue;
                }
                int maxi=0;
                for(auto it:st)
                {
                    maxi+=obj.size[it];
                }
                maxiTotal=max(maxiTotal,maxi+1);
                st.clear();
                
            }
        }
        
        for(int i=0;i<n*n;i++)
        {
            int tt=obj.findPar(i);
            int sz=obj.size[tt];
            maxiTotal=max(maxiTotal,sz);
        }
        return maxiTotal;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout<<obj.MaxConnection(grid)<<"\n";
    }
}

// } Driver Code Ends