class Solution {
public:
    int minMovesToSeat(vector<int>& s, vector<int>& ss) 
    {
        int ans=0;
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            ans+=abs(s[i]-ss[i]);
        }
        return ans;
    }
};