class Solution {
    public String reverseWords(String s)
    {
        int n=s.length()-1;
        int j=0;
        
        String ans="";
        while(n>=0)
        {
            while(n>=0 && s.charAt(n)==' ')n--;
                
            j=n;// the index at which space ended
            
            if(n<0)
            {
                break;
            }
            while(n>=0 && s.charAt(n)!=' ')n--;
            if(ans.isEmpty())
            {
                ans=ans.concat(s.substring(n+1,j+1));
            }
            else
            {
                ans=ans.concat(" "+s.substring(n+1,j+1));
            }
                    
        }
        
        return ans;
    }
}