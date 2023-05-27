//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int k) 
    { 
        unordered_map<int,int>mp;
        int pre=0;
        int maxi=0;
        for(int i=0;i<N;i++)
        {
            pre+=A[i];
            if(pre==k)
            {
                maxi=i+1;
            }
            int sum=pre-k;
            if(mp.find(sum)!=mp.end())
            {
                int len=i-mp[sum];
                maxi=max(len,maxi);
            }
            if(mp.find(pre)==mp.end())
            {
                mp[pre]=i;
            }
        }
        return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends