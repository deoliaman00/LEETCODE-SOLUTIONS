class Solution {
public:
    void rotate(vector<vector<int>>& mm)
    {
        int m=mm.size();
        int n=mm[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(mm[i][j],mm[j][i]);
            }
            
        }
        
        for(int i=0;i<m;i++)
        {
           
                reverse(mm[i].begin(),mm[i].end());
        }
            
        
        
        
    }
};