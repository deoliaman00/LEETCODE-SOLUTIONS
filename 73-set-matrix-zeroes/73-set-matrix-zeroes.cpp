class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
       
        // 0(n) space consumed
        
//         int rowSize=matrix.size();
//         int colSize=matrix[0].size();
//         vector<pair<int,int>>ans;
        
//         for(int i=0;i<rowSize;i++)
//         {
//             for(int j=0;j<colSize;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     ans.push_back(make_pair(i,j));
//                 }
//             }
//         }
        
//         for(auto a:ans)
//         {
            
//                 cout<<a.first<<" "<<a.second<<" ";
        
//         }
        
//     for(auto a:ans)
//     {
//         for(int i=0;i<rowSize;i++)
//         {
//             for(int j=0;j<colSize;j++)
//             {
//                if(i==a.first) // 1 1 
//                {                
//                 matrix[i][j]=0;
//                }
//             else if(j==a.second)
//             {
//                 matrix[i][j]=0;
//             }
//             }
//         }
//     }
        
             int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (col0 == 0) matrix[i][0] = 0;
    }
        
        
    }
};