class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       vector<int>ahead(2,0),curr(2,0);
        
        ahead[0]=ahead[1]=0;
        
        for(int i=n-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                int op1=0,op2=0,profit=0;
                
                if(buy==0)
                {
                    op1=0+ahead[0];
                    op2=-prices[i]+ahead[1];
                    profit=max(op1,op2);
                    
                }
                if(buy==1)
                {
                    op1=0+ahead[1];
                    op2=prices[i]+ahead[0];
                    profit=max(op1,op2);
                }
                curr[buy]=profit;
            }
            ahead=curr;
        }
        
        return ahead[0];
    }
};