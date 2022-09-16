class Solution {
public:
    int findMinDifference(vector<string>& tP)
    {
        
        vector<int>ans;
        for(int i=0;i<tP.size();i++)
        {
            int hr=stoi(tP[i].substr(0,2));
            int min=stoi(tP[i].substr(3,6));
            ans.push_back(hr*60+min);
        }
        int mini=INT_MAX;
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++)
        {
            mini=min(mini,ans[i]-ans[i-1]);
            
        }
        return min(mini,ans.front()+1440-ans.back());
    }
};