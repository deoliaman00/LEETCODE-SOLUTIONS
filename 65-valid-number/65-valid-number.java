class Solution {
    public boolean isNumber(String s)
    {
        boolean digitSeen=false,dotSeen=false,eSeen=false;
        int countSign=0;
            
            for(int i=0;i<s.length();i++)
            {
                char ch=s.charAt(i);
                
                // check for number
                
                if(Character.isDigit(ch))
                {
                    digitSeen=true;
                }
                
                else if(ch=='+'||ch=='-')
                {
                    if(countSign==2)
                    {
                        return false;
                    }
                    if((i>0)&&(s.charAt(i-1)!='e'&& s.charAt(i-1)!='E'))
                    {
                        return false;
                    }
                    
                    if(i==s.length()-1)
                    {
                        return false;
                    }
                    countSign++;
                }
                
                else if(ch=='.')
                {
                 // eseh phle toh tumne e. toh nahi dekhaa and eseh pehle dot toh nahi dekhaaa
                    if((eSeen!=false)||(dotSeen!=false))
                    {
                        return false;
                    }
                    if(i==s.length()-1 && digitSeen==false)
                    {
                        return false;
                    }
                    dotSeen=true;
                }
                else if(ch=='e'||ch=='E')//............wrong cases-> ee   e45    45e
                {
                    if(eSeen!=false|| digitSeen==false||i==s.length()-1)
                    {
                        return false;
                    }
                    eSeen=true;
                    
                }
                else
                {
                    return false;
                }
            }
        
        return true;
    }
}
