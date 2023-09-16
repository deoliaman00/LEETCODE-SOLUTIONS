//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
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
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators)
    {
        int count=0;
        vector<int>ans;
        DisjointSet obj(n*m);
        int X[]={0,-1,0,1};
        int Y[]={-1,0,1,0};
        int vis[n][m];
        memset(vis,0,sizeof(vis));
        for(auto it:operators)
        {
            int x=it[0];
            int y=it[1];
            if(vis[x][y]==1)
            {
                ans.push_back(count);
                continue;
            }
            vis[x][y]=1;
            count++;
            for(int i=0;i<4;i++)
            {
                int nx=x+X[i];
                int ny=y+Y[i];
               
                if(nx>=0 && nx<n && ny>=0 && ny<m)
                {
                   if(vis[nx][ny]==1)
                    {
                        int adjOne=x*m+y;
                        int adjSec=nx*m+ny;
                        if(obj.findPar(adjOne)!=obj.findPar(adjSec))
                        {
                             vis[nx][ny]=1;
                             obj.unionBySize(adjOne,adjSec);
                             count--;
                        }
                       
                    } 
                }
                
            }
            ans.push_back(count);
        }
        return ans;
       
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends