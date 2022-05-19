class Solution {
public:
    
     int k=0;
    int path(vector<vector<int>>& m,vector<vector<int>>& matrix,int i,int j,int last){
        if(i<0 || j<0 || i==matrix.size() || j==matrix[0].size() || matrix[i][j]<=last)return 0;
        
        if(m[i][j]!=-1)return m[i][j];
        
        int a=path(m,matrix,i+1,j,matrix[i][j]);
        int b=path(m,matrix,i-1,j,matrix[i][j]);
        int c=path(m,matrix,i,j+1,matrix[i][j]);
        int d=path(m,matrix,i,j-1,matrix[i][j]);
        
        return m[i][j]=1+max({a,b,c,d});
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
         k=0;
        vector<vector<int>> m(matrix.size(),vector<int>(matrix[0].size(),-1));
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[i].size();j++)
                if(m[i][j]==-1){
                    m[i][j]=path(m,matrix,i,j,-1),k=max(k,m[i][j]);
                }
        return k;
        
    }
};
