class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid)
    {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        int sam[m][n];
        queue<pair<pair<int,int>,int>>pq;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    pq.push({{i,j},0});sam[i][j]=2;
                }
                else
                {
                    sam[i][j]=0;
                }
                if(grid[i][j]==1)
                {
                    cnt++;
                  //  sam[i][j]=1;
                }
            }
        }
        int maxi=0;
        int arr1[]={-1,0,1,0};
        int arr2[]={0,1,0,-1};
        int cnt2=0;
        while(!pq.empty())
        {
            int newI=pq.front().first.first;
            int newJ=pq.front().first.second;
            // Both the indexes of the 2,2 has been taken into account now take the time into the next variable
            int time=pq.front().second;
            maxi=max(maxi,time);
            pq.pop();
            for(int i=0;i<4;i++)
            {
                int r=arr1[i]+newI;
                int c=arr2[i]+newJ;
                // eg:- 2 wala index jo hai + uske sath jo 4 directions mae sides aari hai unko mark kro check kro
                if(r>=0 && c>=0 && r<m && c<n && grid[r][c]==1 && sam[r][c]==0)
                {
                    pq.push({{r,c},time+1});
                    sam[r][c]=2;
                    cnt2++;
                }
            }
        }
        
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(grid[i][j]==1)
        //         {
        //           cnt1++;
        //         }
        //     }
        // }
         if(cnt!=cnt2)return -1;
         return maxi;
           
    }
};