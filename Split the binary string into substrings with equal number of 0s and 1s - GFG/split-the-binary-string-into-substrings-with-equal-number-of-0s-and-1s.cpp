//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
       int count=0;
       int c1,c0;
       c1=c0=0;
       for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1')
            {
                c1++;
            }
            else
            {
                c0++;
            }
            if(c1==c0)
            {
                count++;
               
            }
        }
        if(c1!=c0)return -1;
        
        return count;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends