class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right)
    {
        int g[51]={0};
        for(int i=0;i<ranges.size();i++)
        {
            int s=ranges[i][0],r=ranges[i][1];
            while(s<=r)
            {
                g[s]=1;
                s++;
            }
        }
        
        for(int i=left;i<=right;i++)
        {
            if(g[i]==0)return false;
            
        }
        return true;
        
        
    }
};