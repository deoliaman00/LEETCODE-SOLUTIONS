// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(),a.end());
        int maxSofar=INT_MIN;
        int minSofar=INT_MAX;
        int diff=INT_MAX;
        int mini=INT_MAX;
        for(int i=0;i+m-1<n;i++)
        {
            minSofar=a[i];
            maxSofar=a[i+m-1];
            diff=maxSofar-minSofar;
            if(diff<mini)
            {
                mini=diff;
            }
        }
        return mini;
    //code
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends