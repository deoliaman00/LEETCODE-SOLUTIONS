class Solution {
public:
    int earliestFullBloom(vector<int>& pT, vector<int>& gT)
    {
        int n=pT.size();
        vector<pair<int,int>>mp;
        for(int i=0;i<n;i++)
        {
            mp.push_back(make_pair(gT[i],pT[i]));
        }
        sort(mp.rbegin(),mp.rend());
        int plantedTime=0,GrownTime=0;
        int ans=0;
        for(auto it:mp)
        {
            // phle ham jis din useh plant kia useh consider krngaw
            // phr hamm jitna useh grow time lgegea voh dekhengae
            plantedTime+=it.second;
            GrownTime=plantedTime+it.first;
            ans=max(ans,GrownTime);
        }
        return ans;
    }
};