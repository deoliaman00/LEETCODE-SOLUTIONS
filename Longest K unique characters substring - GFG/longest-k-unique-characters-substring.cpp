//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        map<char,int>mp;
    int n=s.size();
    int st=0,ed=0;
    int maxi=-1;
    while(ed<n)
    {
        mp[s[ed]]++;
        if(mp.size()==k)
        {
            maxi=max(maxi,ed-st+1);
        }
        else if(mp.size()>k)
        {
        
             while(mp.size()>k)
             {
                 mp[s[st]]--;
                 if(mp[s[st]]==0)
                 {
                     mp.erase(s[st]);
                 }
                 st++;
             }
        }
        ed++;
    }
    return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends