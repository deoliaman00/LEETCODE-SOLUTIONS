class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) 
    {
        int n=m.size();
        int mm=m[0].size();
        bool f=true;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<mm-1;j++)
            {
                if(m[i][j]!=m[i+1][j+1])
                {
                    return false;
                }
            }
        }
        
        return f;
        
    }
};