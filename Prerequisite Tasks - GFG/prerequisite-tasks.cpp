//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites)
	{
	    vector<int>adj[N];
	    for(auto it: prerequisites)
	    {
	        adj[it.first].push_back(it.second);
	    }
	    
	    
	    // calculating the indegree of the nodes 
	    int indeg[N]={0};
	    for(int i=0;i<N;i++)
	    {
	        for(auto it:adj[i])
	        {
	            indeg[it]++;
	        }
	    }
	    
	    queue<int>qt;
	    for(int i=0;i<N;i++)
	    {
	        if(indeg[i]==0)
	        {
	            qt.push(i);
	        }
	    }
	    vector<int>topo;
	    
	    // all the nodes with 0 incoming edges
	    while(!qt.empty())
	    {
	        int node=qt.front();
	        qt.pop();
	        topo.push_back(node);
	        
	        for(auto it:adj[node])
	        {
	            indeg[it]--;// first decrease the particular vector count
	            // then check is it still 0 or greatert then zero
	             if(indeg[it]==0)
	            {
	                qt.push(it);
	            }
	       }
	    }
	    
	    if(topo.size()==N)return true;
	    else 
	    return false;
	    
	    
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends