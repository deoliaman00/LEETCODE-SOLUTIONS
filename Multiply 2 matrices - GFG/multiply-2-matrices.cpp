// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    void Mutliply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB)
    {
        int r1=matrixA.size();
        int c1=matrixA[0].size();
        int r2=matrixB.size();
        int c2=matrixA.size();
        
                        vector<vector<int>> C(r1, vector<int>(c2,0));
        
        
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                int sum=0;
                for(int k=0;k<r2;k++)
                {
                    sum+=matrixA[i][k]*matrixB[k][j];
                }
                C[i][j]=sum;
            }
        }
        
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                
                matrixA[i][j]=C[i][j];
            }
        }
        
        
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Mutliply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends