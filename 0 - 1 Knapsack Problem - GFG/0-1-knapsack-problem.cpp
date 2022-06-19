// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
   int knapSackRec(int W, int wt[],int val[], int i,vector<vector<int>>&dp)
   { // base condition
    if (i < 0)
        return 0;
    if (dp[i][W] != -1)
        return dp[i][W];

    if (wt[i] > W)
    {

        // Store the value of function call
        // stack in table before return
        dp[i][W] = knapSackRec(W, wt,val, i - 1,dp);
        return dp[i][W];
    }
    else
    {
        // Store value in a table before return
        dp[i][W] = max(val[i] + knapSackRec(W - wt[i],wt, val,i - 1, dp),knapSackRec(W, wt, val,i - 1, dp));

        // Return value of table after storing
        return dp[i][W];
    }
}

int knapSack(int W, int wt[], int val[], int n)
{
    // double pointer to declare the
    // table dynamically
   vector<vector<int>>dp(n,vector<int>(W+1,-1));
    return knapSackRec(W, wt, val, n - 1, dp);
}
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends