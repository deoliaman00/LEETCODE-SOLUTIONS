//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    private:
    vector<int>topoSort(vector<int>adj[],int K)
    {
        vector<int>topo;
        int vis[K]={0};
        for(int i=0;i<K;i++)
        {
            for(auto it:adj[i])
            {
                vis[it]++;
            }
        }
        
        
        queue<int>qt;
        for(int i=0;i<K;i++)
        {
            if(vis[i]==0)
            {
                qt.push(i);
            }
        }
        
        
        while(!qt.empty())
        {
            int node=qt.front();
            qt.pop();
            topo.push_back(node);
            for(auto it:adj[node])
            {
                vis[it]--;
                if(vis[it]==0)
                {
                    qt.push(it);
                }
            }
        }
        
        return topo;
        
    }
    public:
    string findOrder(string dict[], int N, int K)
    {
        // Look first we have to make a adjaceny matrix
        // which will tell us that this ele will come first
        // and this ele will come after this
        vector<int>Adj[K];
        for(int i=0;i<N-1;i++)
        {
            string a=dict[i];
            string b=dict[i+1];
            int size=min(a.size(),b.size());
            for(int k=0;k<size;k++)
            {
                if(a[k]!=b[k])
                {
                    Adj[a[k]-'a'].push_back(b[k]-'a');
                    break;
                }
            }
        }
        
        // lets make a topo-sort;
        // we need two things for that
        // a no of vertices 
        // a adjaceny matrix
        
        vector<int>topo=topoSort(Adj,K);
        
        string arr;
        
        for(auto it:topo)
        {
            arr+=char(it+'a');    
        }
        return arr;
        
    }
};

//{ Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends