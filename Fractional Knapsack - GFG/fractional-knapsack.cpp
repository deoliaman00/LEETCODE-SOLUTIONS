// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
  
    static bool cmp(struct Item a,struct Item b){
    
        double val1=(double)a.value/(double)a.weight;
        double val2=(double)b.value/(double)b.weight;
        
        return val1>val2;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double maxi=0;
        
        sort(arr,arr+n,cmp);
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight<=W)
            {
                W-=arr[i].weight;
               maxi+=arr[i].value;
            }
            else
            {
                maxi+=arr[i].value*((double)W/(double)arr[i].weight);
                break;
            }
        }
        return maxi;

        // Your code here
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends