// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.


bool gcheck(int node,int color[],int m,int n,bool graph[101][101],int colr)
{
    
    for(int i=0;i<n;i++)
    {
       if(i!=node && graph[i][node]==1 && color[i]==colr)
       {
           return false;
       }
    }
    
    return true;
}


bool check(int node,int color[],int m,int n,bool graph[101][101])
{
    //  base case codition when all nodes are satisfied
    
    if(node==n)
    {
        return true;
    }
    
    
    
    for(int i=1;i<=m;i++)
    {
       if(gcheck(node,color,m,n,graph,i))
       {
           color[node]=i;
           if(check(node+1,color,m,n,graph))
           {
               return true;
           }
           
           color[node]=-1;
       }
    }
       return false;
     
}












bool graphColoring(bool graph[101][101], int m, int n) 
{
    int color[n];
        for(int i=0;i<n;i++)
        {
            color[i]=-1;
        }
    if(check(0,color,m,n,graph))return true;
    
    return false;
}
// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends