class Solution {
public:
    int leng(int n)
    {
        string a=to_string(n);
        return a.size();     
        
    }
    void func(int ind,vector<int>&ans,int n,int k)
    {
        if(leng(ind)==n)
        {
            ans.push_back(ind);
            return;
        }
        for(int i=0;i<=9;i++)
        {
            int ld=ind%10;
            if(abs(ld-i)==k)
            {
                int ni=ind*10+i;
                 func(ni,ans,n,k);
            }
           
        }
    }
    vector<int> numsSameConsecDiff(int n, int k)
    {
      vector<int>ans;
        for(int i=1;i<=9;i++)
        {
            func(i,ans,n,k);
        }
        return ans;
    }
};