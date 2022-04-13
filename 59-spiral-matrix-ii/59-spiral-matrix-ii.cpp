class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
       /*
        
         1  2 3  4
         5  6 7  8
         9 10 11 12
        
        */
        vector<vector<int>> matrix(n,vector<int>(n) );
        int i;
        int c=1;
        int low=0,top=0,right=n-1,below=n-1;
        // low=0--top=0--right=4----below=3
        while(low<=right && top<=below)
        {
            
            for(i=low;i<=right;i++)
            {
                matrix[top][i]=c++;
            }
            top++;
            if(top>below) break;
            // 1->2->3->4 printed
            
            for(i=top;i<=below;i++)
            {
                matrix[i][right]=c++;
            }    
            right--;
            if(low>right) break;
            
            // 1->2->3->4--->8->12->
            
            for(i=right;i>=low;i--)
            {
                matrix[below][i]=c++;
            }
            below--;
            
            // 1->2->3->4---->8->12---->11->10->9----
            for(i=below;i>=top;i--)
            {
                matrix[i][low]=c++;
            }
            low++;
        }
        return matrix;
              
    }
};