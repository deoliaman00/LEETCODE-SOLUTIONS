class Solution {
public:
    int minimumCost(vector<int>& cost)
    {
       sort(cost.begin(),cost.end());
        int price=0;
        int n=cost.size()-1;
        while(n>1)
        {
            price+=cost[n--];// costly stuff 1
            price+=cost[n--];// costly stuff 2
            n--;// free stuff
        }
        
        while(n>=0)
        {
            price+=cost[n];
            n--;
        }
        return price;
    }
};