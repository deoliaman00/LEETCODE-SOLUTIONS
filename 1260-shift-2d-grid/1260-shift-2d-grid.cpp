class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
    {
        int n1=grid.size();
        int n2=grid[0].size();
        vector<vector<int>> shift(grid.size(),vector<int>(grid[0].size(),0));
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                shift[(i+(j+k)/grid[i].size())%grid.size()][(j+k)%grid[i].size()]= grid[i][j];
            }
        }
        return shift;
        
    }
        
    
};