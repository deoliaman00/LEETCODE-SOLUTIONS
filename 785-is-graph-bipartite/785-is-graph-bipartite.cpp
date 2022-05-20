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
        /*
         0-> 1,2,3
         1-> 0,2,
         2-> 0,1,3
         3-> 0,2    
         
         */
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