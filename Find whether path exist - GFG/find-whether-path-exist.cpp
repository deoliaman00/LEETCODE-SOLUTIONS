// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    void dfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,int i,int j)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0 || visited[i][j]==true)
        {
            return;
        }
        
        visited[i][j]=true;
        dfs(grid,visited,i+1,j);
        dfs(grid,visited,i,j+1);
        dfs(grid,visited,i-1,j);
        dfs(grid,visited,i,j-1);
        
    }
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int m=grid.size();int n=grid[0].size(); 
        
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        
        int a=0,b=0,p=0,q=0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                a=i,b=j;
                }
                if(grid[i][j]==2)
                {
                p=i,q=j;
                }
            }
        }
        
        dfs(grid,visited,a,b);
        
        return visited[p][q];
    }
};
// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends