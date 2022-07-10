class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
    vector<int> dp(n+1,0);
      dp[0]=0;
       dp[1]=0;
       for(int i=2;i<=n;i++)
       {
           dp[i]=min(cost[i-1]+dp[i-1],cost[i-2]+dp[i-2]);
       }
    return dp[n];
        
    }
};

/*
class Solution {
public:
    int func(vector<int>& cost,int n)
    {
       if(n==0||n==1){return 0;}
        
        return min(cost[n-2]+func(cost,n-2),cost[n-1]+func(cost,n-1));
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        // first index
        int N=cost.size();
        return func(cost,N);
        
    }
};


Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.
Example 2:

Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: You will start at index 0.
- Pay 1 and climb two steps to reach index 2.
- Pay 1 and climb two steps to reach index 4.
- Pay 1 and climb two steps to reach index 6.
- Pay 1 and climb one step to reach index 7.
- Pay 1 and climb two steps to reach index 9.
- Pay 1 and climb one step to reach the top.
The total cost is 6.


*/