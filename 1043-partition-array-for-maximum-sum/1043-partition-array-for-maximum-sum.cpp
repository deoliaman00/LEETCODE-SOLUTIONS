class Solution {
public:
    int f(int i,int k,vector<int>arr,vector<int>&dp)
    {
        int n=arr.size();
        if(i==n)
        {
            return 0;
        }
        if(dp[i]!=-1)return dp[i];
        int len=0,maxi=INT_MIN,maxAns=INT_MIN;
        for(int j=i;j<min(n,i+k);j++)
        {
            len++;// counting every element as the partition and also the whole len of elements coming in that line
            maxi=max(maxi,arr[j]); // max ele
            int sum=len*maxi+f(j+1,k,arr,dp);
            maxAns=max(sum,maxAns);
        }
        
        return dp[i]=maxAns;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k)
    {
        int n=arr.size();
        int i=0;
        vector<int>dp(n+1,0);
        for(int i=n-1;i>=0;i--)
        {
                   
                int len=0,maxi=INT_MIN,maxAns=INT_MIN;
                for(int j=i;j<min(n,i+k);j++)
                {
                    len++;// counting every element as the partition and also the whole len of elements coming in that line
                    maxi=max(maxi,arr[j]); // max ele
                    int sum=len*maxi+dp[j+1];
                    maxAns=max(sum,maxAns);
                }
            dp[i]=maxAns;
        }
        
        return dp[0];
    }
};

/*
Input: arr = [1,15,7,9,2,5,10], k = 3
Output: 84
Explanation: arr becomes [15,15,15,9,10,10,10]
Example 2:

Input: arr = [1,4,1,5,7,3,6,1,9,9,3], k = 4
Output: 83
*/
