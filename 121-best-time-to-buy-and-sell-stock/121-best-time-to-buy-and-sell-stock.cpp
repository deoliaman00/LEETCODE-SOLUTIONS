class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minSofar=prices[0];
        int profit=0,maxSofar=0;
        for(int i=0;i<prices.size();i++)
        {
            minSofar=min(minSofar,prices[i]);
            profit=prices[i]-minSofar;
            maxSofar=max(profit,maxSofar);
        }
        return maxSofar;
    }
};