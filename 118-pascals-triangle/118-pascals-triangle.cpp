class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>ans(numRows);
        
        
        
        for(int i=0;i<numRows;i++)
        {
            ans[i].resize(i+1);         // INC THE SIZE OF THE ARRAY BY ONE
           ans[i][0]=ans[i][i]=1;
            // marking the first and last column as 1
            
            for(int j=1;j<i;j++)
            {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                
            }
        }
        
        
        
        
        
        
        
        
        
        
        
        
        return ans;
        
    }
};