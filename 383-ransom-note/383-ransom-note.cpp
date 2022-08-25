class Solution {
public:
    bool canConstruct(string rN, string mz)
    {
      vector<int>arr(26,0);
        for(int i=0;i<mz.size();i++)
        {
            arr[mz[i]-'a']++;
        }
        
        for(int i=0;i<rN.size();i++)
        {
            if(arr[rN[i]-'a']==0)
            {
                return false;
            }
            arr[rN[i]-'a']--;
        }
        return true;
    }
};