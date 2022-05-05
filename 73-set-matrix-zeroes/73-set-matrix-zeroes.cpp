class Solution {
public:
    void setZeroes(vector<vector<int>>& nums)
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
        
             int rows=nums.size(),col=nums[0].size();
            int flag=1;
        for(int i=0;i<rows;i++)
        {
            if(nums[i][0]==0) flag=0;
            for(int j=1;j<col;j++)
            {
                if(nums[i][j]==0)
                {
                    nums[i][0]=nums[0][j]=0;
                    
                }
            }
        }
        
        for(int i=rows-1;i>=0;i--)
        {
            for(int j=col-1;j>=1;j--)
               if(nums[i][0]==0 || nums[0][j]==0)
                   nums[i][j]=0;
            if(flag==0)  nums[i][0]=0;
        }
         
    }
};