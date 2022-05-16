class Solution {
public:
    int maxPoints(vector<vector<int>>& p) 
    {
        if(p.size()<=2) return p.size();
        int maxi=2;
        
        int n=p.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int maxPoints=2;
                for(int k=0;k<n;k++)
                {
                    if(k!=i && k!=j)
                    {
                        if( ( (p[j][1]-p[i][1])*(p[i][0]-p[k][0]))==((p[j][0]-p[i][0])*(p[i][1]-p[k][1]) ) )
                        {
                            maxPoints++;
                        }
                    }
                     maxi=max(maxi,maxPoints);
                    
                }
               
            }
        }
        
     return maxi;
        
    }
};