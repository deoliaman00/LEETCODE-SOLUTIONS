// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:

    bool check(vector<int>arr,int n,int sum, vector<vector<int>>&dp)
    {
         if(sum==0)return true;
         if(n==0)return (arr[0]==sum);
         if(dp[n][sum]!=-1)
         {
             return dp[n][sum];
         }
         bool notTake=check(arr,n-1,sum,dp);
         
         bool take=false;
         
         if(sum>=arr[n])
         {
             take= check(arr,n-1,sum-arr[n],dp);
         }
         
         return dp[n][sum]=(take|notTake);
    }
    bool isSubsetSum(vector<int>arr, int sum)
    { int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
       
         return check(arr,n-1,sum,dp);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends