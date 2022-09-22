class Solution {
public:
    int stoneGameVI(vector<int>& aV, vector<int>& bV)
    {
        vector<vector<int>>v;
        int n=aV.size();
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            
            temp.push_back(aV[i]+bV[i]);
            temp.push_back(aV[i]);
            temp.push_back(bV[i]);
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),greater<vector<int>>());
        int alice=0,bob=0;
        for(int i=0;i<v.size();i++)
        {
            
                if(i%2==0)
                {
                    alice+=v[i][1];
                }
                else
                {
                    bob+=v[i][2];
                }
            
        }
        
        if(alice>bob)return 1;
        else if(alice==bob)return 0;
        else return -1;
        
    }
};