class Solution {
public:
    bool cmp(string &str,vector<int>&arr)
    {
         vector<int>count(26,0);
        
        for(int i=0;i<str.size();i++)
        {
            if(count[str[i]-'a']==1)return false;
        count[str[i]-'a']=1;
        }       
        for(int i=0;i<str.size();i++)
        {
            if(arr[str[i]-'a']==1)return false;
        }
        
        return true;        
    }
    
    
    int func(int i,vector<string>&arr,vector<int>&Count,int &len)
    {
        if(i==arr.size())
        {
            return len;
        }
        string str=arr[i];
        if(cmp(str,Count)==false)
        {
            return func(i+1,arr,Count,len);
        }
        else
        {
            // pick1
            for(int j=0;j<str.size();j++)
            {
                Count[str[j]-'a']=1;
            }
            len+=str.size();
            int pick=func(i+1,arr,Count,len);
            
            
            // pick2
            for(int j=0;j<str.size();j++)
            {
                Count[str[j]-'a']=0;
            }
            len-=str.size();
            int notpick=func(i+1,arr,Count,len);
            
            
            return max(pick,notpick);
        }
        
    }
    
    int maxLength(vector<string>& arr) 
    {   
        vector<int>count(26,0);
        int len=0;
       return func(0,arr,count,len);
        
    }
};