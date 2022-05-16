class Solution {
public:
    bool findlength(vector<int>a,vector<int>b,set<int>&ans)
    {
        if(a[0]==b[0] && a[1]==b[1])
        {
            return false;
        }
        
        int x=a[0]-b[0];
        int y=a[1]-b[1];
        int ans2=x*x+y*y;
        
        ans.insert(ans2);
        return true;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4)
    {
        set<int>sett;
        if(!findlength(p1,p2,sett) || !findlength(p1,p3,sett) || !findlength(p1,p4,sett) || !findlength(p2,p3,sett) || !findlength(p2,p4,sett) || !findlength(p3,p4,sett))
        {
            return false;
        }
                
        if(sett.size()==2)
        {
            return true;
        }
        
        return false;
    }
};