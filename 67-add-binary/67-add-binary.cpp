class Solution {
public:
    string addBinary(string a, string b)
    {
        int m=a.size(),n=b.size();
        int i=m-1,j=n-1;
        int carry=0;
        string s="";
        while(i>=0 || j>=0)
        {
            int sum=carry;
            if(i>=0)
            {
                sum+=a[i]-'0';
                i--;
            }
            if(j>=0)
            {
                sum+=b[j]-'0';
                j--;
            }
            
            s+=(sum%2+'0');
            carry=sum/2;
           
        }
        
        if(carry!=0)
        {
            s+=(carry+'0');
        }
        
        reverse(s.begin(),s.end());
        
        return s;
        
    }
};