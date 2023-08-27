//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination)
    {
        if(source.first==destination.first && source.second==destination.second)return 0;
        queue<pair<int,pair<int,int>>>qt;
        int n=grid.size();
        int m=grid[0].size();
        qt.push({0,{source.first,source.second}});
        int X[]={0,-1,0,1};
        int Y[]={-1,0,1,0};
        vector<vector<int>>grid2(n,vector<int>(m,1e9));
        while(!qt.empty())
        {
            auto it=qt.front();
            int dist=it.first;
            int nx=it.second.first;
            int ny=it.second.second;
            qt.pop();
            for(int i=0;i<4;i++)
            {
                int new_x=nx+X[i];
                int new_y=ny+Y[i];
                if(new_x>=0 && new_x<n && new_y>=0 && new_y<m && grid[new_x][new_y]==1 && dist+1<grid2[new_x][new_y])
                {
                    grid2[new_x][new_y]=1+dist;
                    if(new_x==destination.first && new_y==destination.second)
                    {
                        return grid2[new_x][new_y];
                    }
                    qt.push({grid2[new_x][new_y],{new_x,new_y}});
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends