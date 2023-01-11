//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    
    int orangesRotting(vector<vector<int>>& grid)
    {
        int cnt=0,count=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        // bfs will be implemented
        queue<pair<pair<int,int>,int>>qt;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    qt.push({{i,j},0});
                    vis[i][j]=2;
                }
                if(grid[i][j]==1)
                {
                    cnt++;
                }
            }
        }
        int maxi=0;
        int time=0;
        int A[]={-1,0,1,0};
        int B[]={0,1,0,-1};
        while(!qt.empty())
        {
            int front=qt.front().first.first;
            int sec=qt.front().first.second;
            int time=qt.front().second;
            qt.pop();
            maxi=max(maxi,time);
            for(int i=0;i<4;i++)
            {
                int ra=front+A[i];
                int ca=sec+B[i];
                if(ra>=0 && ca>=0 && ra<n && ca<m && vis[ra][ca]==0 
                && grid[ra][ca]==1)
                {
                    vis[ra][ca]=1;
                    qt.push({{ra,ca},time+1});
                
                    count++;
                }
            }
            
        }
        if(cnt!=count)return -1;
        
        return maxi;
        
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends