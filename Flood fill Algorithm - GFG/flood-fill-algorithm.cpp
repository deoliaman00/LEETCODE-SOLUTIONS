//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void dfs(int r,int c,int tar,int presT,vector<vector<int>>& dp)
    {
        int m=dp.size();
        int n=dp[0].size();
        if(r<0 || r>=m || c<0 || c>=n || dp[r][c]!=presT || dp[r][c]==tar )return;
        
        dp[r][c]=tar;    
        
        dfs(r+1,c,tar,presT,dp);
        dfs(r,c+1,tar,presT,dp);
        dfs(r-1,c,tar,presT,dp);
        dfs(r,c-1,tar,presT,dp);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& dp, int sr, int sc, int tar)
    {
        int m=dp.size();
        int n=dp[0].size();
        vector<vector<int>>ans=dp;
        int presT=dp[sr][sc];
       
                dfs(sr,sc,tar,presT,ans);
                
         
        return ans;
       
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends