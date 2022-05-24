// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int isPossible (string S)
{
    int N=S.length();
    
    int A[26]={0};
    for(int i=0;i<N;i++)
    {
        A[S[i]-'a']++;
    }
    int flag=0;
    
    for(int i=0;i<26;i++)
    {
     if(A[i]%2!=0)
     {
         flag++;
     }
        
    }
    
    if(flag>1)
    {
        return false;
    }
    return true;
}