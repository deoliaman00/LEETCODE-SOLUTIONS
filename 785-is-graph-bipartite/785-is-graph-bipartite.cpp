class Solution {
public:
    
    bool check(vector<vector<int>>g,int c,int color[])
    {
        if(color[c]==-1)
        {
            color[c]=-1;
        }
        
        for(auto i:g[c])
        {
            if(color[i]==-1)
            {
                color[i]=1-color[c];
                if(!check(g,i,color)) return false;
            }
            else if(color[i]==color[c])
            {
                return false;
            }
        }
        
        
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph)
    {
        //apporach 2 using dfs
        int m=graph.size();
        int color[m];
        memset(color,-1,sizeof color);
        for(int i=0;i<m;i++)
        {
            if(color[i]==-1)
            {
                if(!check(graph,i,color)) return false; // firstVector , currNode , colorNode of previous
                
                    // if(check(condition)==0)......if(check(condition)==false)
            
            }
        }
        
        return true;
        
    }
};

// method 1 using bfs
/*
class Solution {
public:
   bool bipartite(int i,vector<vector<int>>graph,int color[])
   {
       queue<int>q;
       q.push(i);
       color[i]=1;
       while(!q.empty())
       {
           int node=q.front();
           q.pop();
           
           for(auto i:graph[node])
           {
               if(color[i]==-1)
               {
                   q.push(i);
                   color[i]=1-color[node];
                   
               }
               else if(color[i]==color[node])
               {
                   return false;
               }
           }
       }
       
       return true;
   }
    
    
    
    bool isBipartite(vector<vector<int>>& graph)
    {
       
        int m=graph.size();
        //no of nodes =>m
        int color[m];
        memset(color,-1,sizeof color);
        for(int i=0;i<m;i++)
        {
            if(color[i]==-1)
            {
                if(!bipartite(i,graph,color)) return false;
            }
        }
        
        return true;
    }
};

*/