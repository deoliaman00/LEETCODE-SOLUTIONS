class Solution {
public:
int find(int k,int n,vector<vector<int>> &dp)
	{   if(n==0||n==1) return n;  
		if(k==1) return n;           
		if(dp[k][n]!=-1) return dp[k][n];
		int ans=1000000,l=1,h=n,temp=0;
		while(l<=h)
		{
			int mid=(l+h)/2;
			int left=find(k-1,mid-1,dp);   
			int right=find(k,n-mid,dp) ;   
			temp=1+max(left,right);           
			if(left<right){                  
			  l=mid+1;                       
			}
			else                             
			{    
				h=mid-1;
			}
			ans=min(ans,temp);               
		}


		return dp[k][n]=ans;

	}
	int superEggDrop(int K, int N) {
		vector<vector<int>> dp(K+1,vector<int> (N+1,-1));
		return find(K,N,dp);

	}


};