class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n=prices.size();
        int profit=0;
        if(n==1 || n==0) return 0;
        for(int i=1;i<n;i++)
        {
            if(prices[i-1]<prices[i])
            {
                profit+= prices[i]-prices[i-1];
            }
        }
        cout<<profit;
        return profit;
    }
};