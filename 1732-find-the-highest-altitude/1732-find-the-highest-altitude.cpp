class Solution {
public:
    int largestAltitude(vector<int>& gain)
    {
        int maxi=0;
        int curSum=0;
        for(int i=0;i<gain.size();i++)
        {
            curSum+=gain[i];
            maxi=max(curSum,maxi);
        }
        return maxi;
        
    }
};