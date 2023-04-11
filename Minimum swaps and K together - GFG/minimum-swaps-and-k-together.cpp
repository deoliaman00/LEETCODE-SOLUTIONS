//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) 
    {
     int count=0,nfav=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            if(arr[i]>k)
            {
                nfav++;
            }
        }
        int ans=nfav;
        int low=0,high=count;
        while(high<n)
        {
            
            if(arr[high]>k)nfav++;
            if(arr[low]>k)nfav--;
            low++;
            high++;
            ans=min(ans,nfav);
        }
       return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends