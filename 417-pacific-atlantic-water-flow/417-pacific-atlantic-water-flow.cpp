#define vc2 vector<vector<int>>
#define vc1 vector<int>


class Solution {
public:
    void func(vc2 &heights,int i,int j,int prev,vc2 &ocean)
    {
        if(i<0 || j<0 || i>=heights.size() || j>=heights[0].size())
            return;
        if(ocean[i][j]==1)
            return;
        if(heights[i][j]<prev)
            return;
        
        ocean[i][j]=1;
        func(heights,i+1,j,heights[i][j],ocean);
        func(heights,i-1,j,heights[i][j],ocean);
        func(heights,i,j+1,heights[i][j],ocean);
        func(heights,i,j-1,heights[i][j],ocean);
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights)
    {
         int n=heights.size();
        int n2=heights[0].size();
        vector<vector<int>>pf(n,vector<int>(n2,0)),atc(n,vector<int>(n2,0));
        vc2 ans;
        for(int r=0;r<heights.size();r++) // 0 1 2 3 4
        {
            func(heights,r,0,INT_MIN,pf); // 00 10 20 30 40
            func(heights,r,heights[0].size()-1,INT_MIN,atc); // 04 14 24 34 44
        }
        for(int c=0;c<heights[0].size();c++)
        {
            func(heights,0,c,INT_MIN,pf);// 00 01 02 03 04
            func(heights,heights.size()-1,c,INT_MIN,atc); // 04 14 24 34 44
        }
        for(int i=0;i<heights.size();i++)
        {
            for(int j=0;j<heights[0].size();j++)
            {
                if(pf[i][j]==1 && atc[i][j]==1 )
                {
                    vector<int>v(2);
                    v[0]=i;
                    v[1]=j;
                    ans.push_back(v);
                }
            }
        }
        return ans;
        
        
    }
};