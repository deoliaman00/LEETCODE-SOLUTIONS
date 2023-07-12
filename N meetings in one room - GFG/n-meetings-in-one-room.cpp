//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    struct meeting{
        int start;
        int end;
        int pos;
    };
    static bool cmp(struct meeting el,struct meeting el2)
    {
        if(el.end<el2.end)return true;
        else if(el.end>el2.end)return false;
        else if(el.pos<el2.pos)return true;
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        struct meeting mar[n];
        for(int i=0;i<n;i++)
        {
            mar[i].start=start[i];
            mar[i].end=end[i];
            mar[i].pos=i+1;
        }
        
        sort(mar,mar+n,cmp);
        int st=mar[0].start;
        int ed=mar[0].end;
        int count=1;
     //   cout<<mar[0].start<<" "<<mar[0].end<<endl;
        for(int i=1;i<n;i++)
        {
            // cout<<i<<"-> "<<" "<<mar[i].start<<" "<<mar[i].end<<endl;
            if(ed<mar[i].start)
            {
               // cout<<ed<<endl;
                count++;
                ed=mar[i].end;
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends