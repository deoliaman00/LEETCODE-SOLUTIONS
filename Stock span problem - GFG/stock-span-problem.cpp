// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
            stack<pair<int,int>> s;
      vector<int> vec;
      vector<int> span(n);
      for(int i=0;i<n;i++)
      {
          if(s.empty())
          vec.push_back(-1);
          else
          {
              if(s.top().first>price[i])
              vec.push_back(s.top().second);
              else
              {
                  while(!s.empty()&&s.top().first<=price[i])
                  s.pop();
                  if(s.empty())
                  vec.push_back(-1);
                  else
                  vec.push_back(s.top().second);
              }
          }
          s.push({price[i],i});
      }
      for(int i=0;i<n;i++)
      span[i]=i-vec[i];
      return span;
        
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