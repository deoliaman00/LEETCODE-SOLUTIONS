class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& iC)
    {
        int N=iC.size();
        vector<int>adj[N];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(iC[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                    
                }
            }
        }
        int counter=0;        
        vector<int>vis(N,0);
        for(int i=0;i<N;i++)
        {
            if(!vis[i])
            {
                counter++;
                dfs(i,adj,vis);
            }
        }
        
        return counter;
       
    }
};

/*
 int k=1;
        for(auto it:adj)
        {
            cout<<"k: "<<k<<"  ";
            for(auto i:it)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            k++;
        }
        
        
    return 2;
        */