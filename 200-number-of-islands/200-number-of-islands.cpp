class Solution {
public:
    void dfs(vector<vector<char>>&grid,int i,int j,int m,int n)
    {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]!='1')
        {
            return;
        }
        
        grid[i][j]='2';
        
        dfs(grid,i+1,j,m,n);
        dfs(grid,i,j+1,m,n);
        dfs(grid,i-1,j,m,n);
        dfs(grid,i,j-1,m,n);
                
    }
    int numIslands(vector<vector<char>>& grid)
    {
        int m=grid.size(); //row size
        int n=grid[0].size(); //column size
        int c=0;
        for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    
                    dfs(grid,i,j,m,n);
                    c+=1;
                }
            }
        }
        return c;
    }
};

// class Solution {
//     void mark_current_island(vector<vector<char>> &matrix,int x,int y,int r,int c)
//     {
//         if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!='1')  //Boundary case for matrix
//             return;
        
//         //Mark current cell as visited
//         matrix[x][y] = '2';
        
//         //Make recursive call in all 4 adjacent directions
//         mark_current_island(matrix,x+1,y,r,c);  //DOWN
//         mark_current_island(matrix,x,y+1,r,c);  //RIGHT
//         mark_current_island(matrix,x-1,y,r,c);  //TOP
//         mark_current_island(matrix,x,y-1,r,c);  //LEFT
//     }
// public:
//     int numIslands(vector<vector<char>>& grid) {
//        /* 
//         //For FAST I/O
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
        
        
//         if(rows==0)     //Empty grid boundary case
//             return 0;
        
//         */
//         //Iterate for all cells of the array
//         int no_of_islands = 0;int cols = grid[0].size();int rows = grid.size();
//         for(int i=0;i<rows;++i)
//         {
//             for(int j=0;j<cols;++j)
//             {
//                 if(grid[i][j]=='1')
//                 {
//                     mark_current_island(grid,i,j,rows,cols);
//                     no_of_islands += 1;
//                 }
//             }
//         }
//         return no_of_islands;
//     }
