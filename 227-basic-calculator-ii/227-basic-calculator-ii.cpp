class Solution {
public:
    int calculate(string s) 
    {
        int n=s.length();
        if(n==0)
        {
            return 0;
        }
        
        int result=0;
        char currentChar;
        char sign='+';
        int newNumber=0,lastDigit=0;
        for(int i=0;i<n;i++)
        {
           // int 
            currentChar=s[i]; // 3+2*2 // cC=3
            if(isdigit(currentChar)!=0)
            {
                newNumber=newNumber*10+(currentChar-'0');
            }
            
            // if(first_check_is_it_a_No && second_it_must_not_be_a_space || i==n-1)
            if(!(isdigit(currentChar))&& (!iswspace(currentChar))|| i==n-1 )
            {
                // 3 is a digit // 3 is not a whitespace // 0!=4
                if(sign=='+'|| sign=='-')
                {
                    result+=lastDigit;
                    lastDigit=(sign=='+')?newNumber:-newNumber;
                    
                }
                else if(sign=='*')
                {
                   lastDigit*=newNumber;
                    
                }
                else if(sign=='/')
                {
                    lastDigit/=newNumber;
                }
                
                sign=currentChar;
                newNumber=0;
            }
        }
        
        result+=lastDigit;
        
        return result;
    }
};