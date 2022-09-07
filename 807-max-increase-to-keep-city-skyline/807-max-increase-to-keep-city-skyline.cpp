class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid)
    {
        int sum=0;
        vector<int>row,col;
        for(int i=0;i<grid.size();i++)
        {
            int maxi=INT_MIN,maxi2=INT_MIN;
            for(int j=0;j<grid[0].size();j++)
            {
                maxi=max(maxi,grid[i][j]);
                maxi2=max(maxi2,grid[j][i]);
                sum+=grid[i][j];
            }
            row.push_back(maxi);
            col.push_back(maxi2);
        }
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                grid[i][j]=min(row[i],col[j]);
            }
        }
        int sum2=0;
        for(int i=0;i<grid.size();i++)
        {   
            for(int j=0;j<grid[0].size();j++)
            {
               
                sum2+=grid[i][j];
            }
        }
        
        return sum2-sum;        
    }
};