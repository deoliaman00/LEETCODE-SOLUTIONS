class Solution {
public:
    vector<vector<int>>critical;
    void dfs(int curr,int par,int &tm,vector<int>&time,vector<int>&lowtime,vector<int> &vis,vector<int>network[]){
        vis[curr]=1;
        time[curr]=lowtime[curr]=tm++;
        for(auto adj:network[curr]){
            if(adj==par)continue;
            if(!vis[adj]){
                dfs(adj,curr,tm,time,lowtime,vis,network);
                lowtime[curr]=min(lowtime[adj],lowtime[curr]);
                if(lowtime[adj]>time[curr]){
                    critical.push_back({curr,adj});
                }
            }
            else{
                lowtime[curr]=min(lowtime[curr],time[adj]);
            }
        }
        
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>network[n];
        vector<int>time(n,-1);
        vector<int>lowtime(n,-1);
        vector<int>vis(n,0);
        for(auto connection:connections){
            network[connection[0]].push_back(connection[1]);
            network[connection[1]].push_back(connection[0]);
        }
        int tm=0;
        dfs(0,-1,tm,time,lowtime,vis,network);
        return critical;
        
    }
};