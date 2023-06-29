//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& heights)
    {
        int n=heights.size();
        int r=heights[0].size();
        int destx=n-1;
        int desty=r-1;
        vector<vector<int>>dp(n,vector<int>(r,1e9));
        dp[0][0]=1;
        priority_queue<pair<int, pair<int, int>>,
                       vector<pair<int, pair<int, int>>>,
                       greater<pair<int, pair<int, int>>>>
            pq;
        pq.push({0,{0,0}});
        
        int x[]={-1,0,1,0};
        int y[]={0,1,0,-1};
        
        while(!pq.empty())
        {
            auto it=pq.top();
            int cost=it.first;
            int sr=it.second.first;
            int sc=it.second.second;
            pq.pop();
            if(sr==destx && sc==desty)return cost;
            for(int i=0;i<4;i++)
            {
                int xx=sr+x[i];
                int yy=sc+y[i];
                if(xx>=0 && xx<n && yy>=0 && yy<r)
                {
                    // taking the max difference between the nodes
                    int diff=max(cost,abs(heights[sr][sc]-heights[xx][yy]));
                    
                    // now taking the lowest amongst the max values
                    if(diff<dp[xx][yy])
                    {
                        dp[xx][yy]=diff;
                        pq.push({diff,{xx,yy}});
                    }
                }
            }
        }
        return 0;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends