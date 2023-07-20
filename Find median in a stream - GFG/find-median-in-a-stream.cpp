//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>left;
    priority_queue<int,vector<int>,greater<int>>right;
    void insertHeap(int &x)
    {
        if(left.size()==0)
        {
            left.push(x); 
            return;
        }
        if(left.size()>right.size())
        {
            if(left.top()>x)
            {
               
                right.push(left.top());
                left.pop();
                left.push(x);
            }
            else
            {
                right.push(x);
            }
        }
        else
        {
            // when both ends are equal
            if(right.top()>x)
            {
                left.push(x);
            }
            else
            {
                right.push(x);
                left.push(right.top());
                right.pop();
            }
        }
        
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
       
        
    }
    
    //Function to return Median.
    double getMedian()
    {
       double value=0.0;
       if(left.size()==right.size())
       {
           value=(left.top()+right.top())/2;
       }
       else{
           value=left.top();
       }
       return value;
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends