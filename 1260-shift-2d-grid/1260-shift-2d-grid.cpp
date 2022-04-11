class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        const int a = grid.size();
        const int b = grid[0].size();
        vector<vector<int>> ans(a, vector<int>(b, 0));
        for (int i = 0; i < a * b; ++i) {
            int ori_y = i / b;
            int ori_x = i % b;
            int new_y = (ori_y + (ori_x + k) / b) % a;
            int new_x = (ori_x + k) % b;
            
            ans[new_y][new_x] = grid[ori_y][ori_x];
        }
        return ans;
        
    }
};