class Solution {
public:
    void flood_fill(vector<vector<int>>& grid,int i,int j,vector<pair<int,int>>&vec)
    {
        int m=grid.size();
        int n=grid[0].size();
        
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0)
            return;
        
        grid[i][j]=0;
        vec.push_back({i,j});
        flood_fill(grid,i+1,j,vec);
        flood_fill(grid,i,j+1,vec);
        flood_fill(grid,i-1,j,vec);
        flood_fill(grid,i,j-1,vec);
        return;
        
    }
    int shortestBridge(vector<vector<int>>& grid)
    {
        vector<pair<int,int>>pp1;// for first island
        vector<pair<int,int>>pp2; // for second island
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                
                if(grid[i][j]==1)
                {
                    count++;
                    if(count==1)
                    {
                        flood_fill(grid,i,j,pp1); // this is the first island     
                    }
                     if(count==2)
                    {
                        flood_fill(grid,i,j,pp2); // this is the second island     
                    }
                    
                }
            }
        }
        
        int mini=INT_MAX;
        
        for(int i=0;i<pp1.size();i++)
        {
            for(int j=0;j<pp2.size();j++)
            {
                    int dist=abs(pp1[i].first-pp2[j].first)+abs(pp1[i].second-pp2[j].second)-1;
                
                if(mini>dist)
                {
                    mini=dist;
                }
            }
        }
        return mini;
    }
};
        