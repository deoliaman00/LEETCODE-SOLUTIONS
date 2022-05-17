// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int a[], int n)
    {
   
    
   //int n=a.size();
    stack<pair<int,int>>s;
    vector<int>ans1;
    vector<int>ans(n);
        
     
        for(int i=0;i<n;i++)
        {
            if(s.empty())
            {
                ans1.push_back(-1);
            }
            else
            {
               if(s.top().first>a[i])
                {
                ans1.push_back(s.top().second);
                }
               else{
               
                while(!s.empty()&& s.top().first<=a[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    ans1.push_back(-1);
                }
                else
                {
                    ans1.push_back(s.top().second);
                }
                   
               }
            }
             s.push({a[i],i});
        }
        
        for(int i=0;i<n;i++)
        {
           // ans.push_back(i-ans1[i]);
            ans[i]=i-ans1[i];
        }
    return ans;
        
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends