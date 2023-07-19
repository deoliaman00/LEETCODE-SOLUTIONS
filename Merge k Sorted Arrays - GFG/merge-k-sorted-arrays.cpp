//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++

class node
{
    public:
    int value,i,j;
    node(int data,int index,int aindex)
    {
        value=data;
        i=index;
        j=aindex;
    }
};

struct compare
{
    public:
        bool operator()(node *a1,node *a2)
        {
            return a1->value>a2->value;
        }
};

class Solution
{
    public:
    //Function to merge k sorted arrays.
   
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<node*,vector<node*>,compare>pq;
        
        for(int i=0;i<K;i++)
        {
           node *obj1=new node(arr[i][0],i,0);
            pq.push(obj1);
        }
        vector<int>ans;
        while(!pq.empty())
        {
           node *obj2=pq.top();
           pq.pop();
            int val=obj2->value;
            int indx=obj2->i;
            int aindx=obj2->j;
            ans.push_back(val);
            if(aindx+1<arr[indx].size())
            {
                node *obj3=new node(arr[indx][aindx+1],indx,aindx+1);
                pq.push(obj3);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends