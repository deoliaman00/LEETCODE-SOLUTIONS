class Solution {
public:
    bool static cmp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])return a[1]>b[1];
        return a[0]<b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& p)
    {
        sort(p.begin(),p.end(),cmp);
        int indx=0,ans=0;
        for(int i=p.size()-1;i>=0;i--)
        {
            if(p[i][1]<indx)
            {
                ans+=1;
            }
            else if(p[i][1]>indx)
            {
                indx=p[i][1];
            }
        }
        return ans;
        
    }
};