//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix)
	{
	    int N=matrix.size();
	    int M=matrix[0].size();
	  vector<vector<int>>cost(N,vector<int>(M,1e9));
	  
	  for(int i=0;i<N;i++)
	  {
	      for(int j=0;j<M;j++)
	      {
	          if(matrix[i][j]!=-1)
	          {
	              cost[i][j]=matrix[i][j];
	          }
	      }
	  }
	  
	  for(int via=0;via<N;via++)
	  {
	      for(int i=0;i<N;i++)
	      {
	          for(int j=0;j<M;j++)
	          {
	              cost[i][j]=min(cost[i][j],cost[i][via]+cost[via][j]);
	          }
	      }
	  }
	  
	  for(int i=0;i<N;i++)
	  {
	      for(int j=0;j<M;j++)
	      {
	          if(cost[i][j]==1e9)
	          {
	              cost[i][j]=-1;
	          }
	      }
	  }
	  
	  matrix=cost;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		obj.shortest_distance(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << matrix[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends