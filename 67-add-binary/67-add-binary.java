class Solution {
    public String addBinary(String a, String b)
    {
        int m=a.length(),n=b.length();
        int i=m-1,j=n-1;
        int carry=0;
        StringBuilder s=new StringBuilder();
        
        while(i>=0 || j>=0)
        {
            int sum=carry;
            if(i>=0)
            {
                sum+=a.charAt(i)-'0';
                i--;
            }
            if(j>=0)
            {
                sum+=b.charAt(j)-'0';
                j--;
            }
            
           s.append(sum%2);
            carry=sum/2;
           
        }
        
        if(carry!=0)
        {
            s.append(carry);
        }
        
       return s.reverse().toString(); 
        
    }
}