class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k)
    {

        //   00 01  10 11 20  21 30  31 
        //  [[1,3],[2,0],[5,10],[6,-10]], k = 1
        // 
        priority_queue<pair<int,int>>ans1;
            int ans=INT_MIN;
        
        for(int i=0;i<points.size();i++)
        {
            while(!ans1.empty() && (points[i][0]-ans1.top().second)>k)
            {
                ans1.pop();
            }
            if(!ans1.empty())
            {
                ans=max(ans,points[i][0]+points[i][1]+ans1.top().first);
            }
            ans1.push({points[i][1]-points[i][0],points[i][0]});            
        }
        return ans;
        
        
    }
};