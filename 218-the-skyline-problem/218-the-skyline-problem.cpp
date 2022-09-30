class Solution {
public:
   vector<vector<int>> getSkyline(vector<vector<int>>& b) {
        priority_queue<vector<int>> live;    // height of building, end of building
        int n=b.size();
        
        int cur=0;
        vector<vector<int>> ans;
        while(cur<n || !live.empty()){
            int cur_x=live.empty()?b[cur][0]:live.top()[1];
            
            
            // cur_x less then cur index starting point so some prev building which are not in curr frame remove then
            if(cur>=n || b[cur][0]>cur_x){
                while(!live.empty() && (live.top()[1]<=cur_x)){
                    live.pop();
                }
            }
            else{
                //add those buildings wich have same starting point
                cur_x=b[cur][0];
                while(cur<n && cur_x==b[cur][0]){
                    live.push({b[cur][2],b[cur][1]});
                    cur++;
                }
            }
            
            //if live is empty means all buldings are in live are lesser end point then cur starting point so we have to put cur_h as 0 otherwise push that height which is greater in frame
            int cur_h=live.empty()?0:live.top()[0];
            if(ans.empty() || ans[ans.size()-1][1]!=cur_h){
                ans.push_back({cur_x,cur_h});
            }
        }
        return ans;
    }
};