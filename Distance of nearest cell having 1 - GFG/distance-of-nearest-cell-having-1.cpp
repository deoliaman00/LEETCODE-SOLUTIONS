//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
    
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int m=grid.size();
	    int n=grid[0].size();
	    vector<vector<int>>dis(m,vector<int>(n,0));
	    vector<vector<int>>vis(m,vector<int>(n,0));
	    queue<pair<pair<int,int>,int>>qt;
	    
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                qt.push({{i,j},0});
	                vis[i][j]=1;
	            }
	        }
	    }
	    
	    int arr1[]={-1,0,1,0};
	    int arr2[]={0,1,0,-1};
	    while(!qt.empty())
	    {
	        int qI=qt.front().first.first;
	        int qJ=qt.front().first.second;
	        int score=qt.front().second;
	        qt.pop();
	       dis[qI][qJ]=score;
	        for(int i=0;i<4;i++)
	        {
	            int ni=qI+arr1[i];
	            int nj=qJ+arr2[i];
	            if(ni>=0 && nj>=0 && ni<m && nj<n && vis[ni][nj]==0)
	            {
	                vis[ni][nj]=1;
	                qt.push({{ni,nj},score+1});
	            }
	        }
	    }
	    
	    return dis;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends