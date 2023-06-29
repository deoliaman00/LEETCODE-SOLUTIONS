//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y)
    {
        if(X==0 && Y==0)return 0;
        vector<vector<int>>B(N,vector<int>(M));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                B[i][j]=1e9;
            }
        }
        // initialised the array
        // s1-> source1 s2->source2
        int s1=0,s2=0;
        B[0][0]=0;
        
        // destination1 -> X and destination2-> Y
        
        // the movement is up down left right
        int x[]={-1,0,1,0};
        int y[]={0,1,0,-1};
        
        queue<pair<int,pair<int,int>>>qt;
        // for storing the weight and the elements
        // {0,[0,0]} => {1,[0,1]} => {2,[0,2]}
        qt.push({0,{0,0}});
        
        while(!qt.empty())
        {
          // step1: Make the queue empty and further move on to take that index
          int cost1=qt.front().first;
          int sn1=qt.front().second.first;
          int sn2=qt.front().second.second;
          qt.pop();
          for(int i=0;i<4;i++)
          {
              int ix=sn1+x[i];
              int iy=sn2+y[i];
              if(ix>=0 && iy>=0 && ix<N && iy<M && A[ix][iy]==1 && 1+cost1<B[ix][iy])
              {
                  B[ix][iy]=1+cost1;
                  qt.push({cost1+1,{ix,iy}});
                  if(ix==X && iy==Y)
                {
                  return 1+cost1;
                }
                  
              }
              
          }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends