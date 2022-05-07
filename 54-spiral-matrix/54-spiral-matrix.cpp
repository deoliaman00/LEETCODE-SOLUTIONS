class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        /*
        
         1  2 3  4
         5  6 7  8
         9 10 11 12
        
        */
        
        vector<int>ans;
        
       int low,right,top,bottom;
        low=0,right=matrix[0].size()-1;
        top=0,bottom=matrix.size()-1;
        
        while(low<=right && top<=bottom)
        {
            for(int i=low;i<=right;i++)
                ans.push_back(matrix[top][i]);
            top++;
            if(top>bottom)
                break;
            for(int i=top;i<=bottom;i++)
                ans.push_back(matrix[i][right]);
            right--;
           if(low>right) break;
            
            for(int i=right;i>=low;i--)
                ans.push_back(matrix[bottom][i]);
            bottom--;
            
           if(bottom<top) break;
            
            for(int i=bottom;i>=top;i--)
                ans.push_back(matrix[i][low]);
          low++;
            
            
        }
              
        return ans;
        }
};