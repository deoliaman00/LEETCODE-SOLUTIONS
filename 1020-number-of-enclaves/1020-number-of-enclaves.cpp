class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) 
    {
        queue<pair<int,int>>qt;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(i==0 || j==n-1 || i==m-1 || j==0)
               {
                   if(grid[i][j]==1)
                   {
                          qt.push({i,j});
                   vis[i][j]=1;
                   }
                
               }
           }
       }
        int count=0;
        int A[]={-1,0,1,0};
        int B[]={0,1,0,-1};
        while(!qt.empty())
        {
            int Ia=qt.front().first;
            int Ib=qt.front().second;
            qt.pop();
            for(int i=0;i<4;i++)
            {
                int newI=Ia+A[i];
                int newJ=Ib+B[i];
                if(newI>=0 && newI<m && newJ>=0 && newJ<n && grid[newI][newJ]==1 && vis[newI][newJ]==0)
                {
                   qt.push({newI,newJ});
                   vis[newI][newJ]=1;
                }
            }
        }
        
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(vis[i][j]==0 && grid[i][j]==1)
               {
                   count++;
               }
           }
       }
        
        return count;
        
    }
};