//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& pre) 
	{
	   vector<int>adj[N];
	   for(auto it:pre)
	   {
	       adj[it.second].push_back(it.first);
	   }
	    vector<int>indegree(N,0);
        for(int i=0;i<N;i++)
        {
            for(auto it:adj[i])
            {
                indegree[it]++;
            }
        }
        int V=N;
        queue<int>qt;
        for(int i=0;i<V;i++)
        {
            if(indegree[i]==0)
            {
                qt.push(i);
            }
        }
        
        vector<int>ds;
        while(!qt.empty())
        {
            int front=qt.front();
            qt.pop();
            ds.push_back(front);
            for(auto it:adj[front])
            {
                indegree[it]--;
                if(indegree[it]==0)
                {
                    qt.push(it);
                }
                
            }
        }
        
        if(V==ds.size())return true;
        
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
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends