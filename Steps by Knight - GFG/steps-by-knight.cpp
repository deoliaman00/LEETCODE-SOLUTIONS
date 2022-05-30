// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
     bool isValid(int i, int j, int n, vector<vector<bool>>&visited){
        if(i>=0 && i<n && j>=0 && j<n && visited[i][j] == false){
            return true;
        }
        return false;
    }
    //bool visitedCheck(vector<vector<bool>>visited,int i,int j,int N)
    //{
      //  if(i>=0  && i<N  && j>=0 && j<N && visited[i][j]==false)
        //{
         //   return true;
        //}
        //return false;
    //}
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int si=KnightPos[0]-1,sj=KnightPos[1]-1;
	    int ti=TargetPos[0]-1,tj=TargetPos[1]-1;
	    if(ti==si && tj==sj) return 0;
	      int A[8]={1,1,-1,-1,2,-2,2,-2};
	           int B[8]={2,-2,2,-2,1,1,-1,-1};
	    
	    vector<vector<bool>>visited(N,vector<bool>(N,false));
	   
	    queue<pair<int,int>>q;
	    q.push({si,sj});
	     visited[si][sj]=true;
	    
	    
	   int ans=0;
	   while(!q.empty())
	   {
	       int size=q.size();
	       ans++;
	       while(size!=0)
	       {
	           pair<int,int>p=q.front();
	           q.pop();
	           int xx=p.first;
	           int yy=p.second;
	           
	  
	           
	           
	           for(int i=0;i<8;i++)
	           {
	               int xxx=xx+A[i];
	               int yyy=yy+B[i];
	               if(xxx==ti && yyy==tj)return ans;
	               if(isValid(xxx,yyy,N,visited))
	               {
	                   visited[xxx][yyy]=true;
                        q.push({xxx,yyy});
	               }
	               
	           }
	       
	           size--;
	       }
	   
	   }
	   return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends