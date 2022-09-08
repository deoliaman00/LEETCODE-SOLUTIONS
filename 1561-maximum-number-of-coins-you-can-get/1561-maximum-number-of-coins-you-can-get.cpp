class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        
        sort(piles.begin(),piles.end());
        int n=piles.size();int sum=0;
        for(int i=n/3;i<n;i=i+2)
        {
            sum+=piles[i];
            //cout<<i<<endl;
        }
        return sum;
    }
};