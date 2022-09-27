class Solution {
public:
    int countPoints(string rings)
    {
        int n=10;
        string a="";
        vector<string>arr(n);
        for(auto i:rings)
        {
            
            if(i<='9')
            {
               
                arr[int(i)-48]+=a;
                
                a="";
            }
            else
            {
                 a+=i;
            }
         }
        int ans=0;
        for(int i=0;i<10;i++)
        {
            int r=0,g=0,b=0;
            for(int j=0;j<arr[i].size();j++)
            {
                if(arr[i][j]=='R')
                {
                    r=1;
                }
                else if(arr[i][j]=='G')
                {
                    g=1;
                }
                else if(arr[i][j]=='B')
                {
                    b=1;
                }
            }
            if(r==1 && g==1 && b==1)
            {
                ans++;
            }
        }
        
        return ans;
        
        
        
    }
};