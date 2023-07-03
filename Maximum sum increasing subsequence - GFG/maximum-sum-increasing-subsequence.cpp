//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    vector<int>dp(n,0);
	    int currMaxi=0;
	    int maxi=0;
	    for(int i=0;i<n;i++)
	    {
	        currMaxi=0;
	        for(int j=0;j<i;j++)
	        {
	            // condition 1: the previous element should be smaller then the current element or elements to get the longest
	            if(arr[j]<arr[i])
	            {   
	                // case1: if it is the longest then tell me is it the maximum one
	                if(currMaxi==0)
	                {
	                    currMaxi=dp[j];
	                } // case2: if not set then just set it up with its own value
	                else if(currMaxi<dp[j])
	                {
	                    currMaxi=dp[j];
	                }
	            }
	        }
	        if(currMaxi==0)
	        {
	            // case 3: IF there was no element smaller than 
	            // current element then we drop it
	            dp[i]=arr[i];
	        }
	        else
	        {
	            // case 4: if there was element greater its value must be stored
	            // in the maxi and then in the end just addin curr value to the dp
	            
	            dp[i]=currMaxi+arr[i];
	        }
	        maxi=max(maxi,dp[i]);
	    }
	    return maxi;
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends