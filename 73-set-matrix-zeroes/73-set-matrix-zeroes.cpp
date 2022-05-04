class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        vector<pair<int,int>>ans;
        
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                if(matrix[i][j]==0)
                {
                    ans.push_back(make_pair(i,j));
                }
            }
        }
        
        for(auto a:ans)
        {
            
                cout<<a.first<<" "<<a.second<<" ";
        
        }
        
    for(auto a:ans)
    {
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
               if(i==a.first) // 1 1 
               {                
                matrix[i][j]=0;
               }
            else if(j==a.second)
            {
                matrix[i][j]=0;
            }
            }
        }
    }
        
        
    }
};