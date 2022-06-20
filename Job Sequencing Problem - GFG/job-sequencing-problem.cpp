// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
 bool cmp(Job a,Job b)
    {
        return a.profit>b.profit;
    }

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,cmp);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i].dead>maxi)
            {
                maxi=arr[i].dead;
            }
        }
        
        // therefore we have found the last point
        
        int fill[maxi];
        for(int i=0;i<maxi;i++)
        {
            fill[i]=-1;
        }
        //memset(fill,-1,sizeof(maxi));
        int count=0,maxProfit=0;
        
        /*
        jobs-> 1    2    3   4   5  
        p->    20   15   10  5   1
        d->    2    2    1   3   3
        f->   -1    -1  -1   -1  -1
        */
        
        for(int i=0;i<n;i++)
        {
            int j=arr[i].dead-1; // we are counting from 0-1 1-2 2-3 3-4 4-5
            while(j>=0 && fill[j]!=-1)
            {
                j--;
            }
            if(j>=0 && fill[j]==-1)
            {
                fill[j]=i;
                maxProfit+=arr[i].profit;
                count++;
            }
        }
        
        
        vector<int>ans;
        ans.push_back(count);
        ans.push_back(maxProfit);
    return ans;
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends