class Solution {
public:
    int calculate(string s)
    {
        int N=s.size();
        stack<int>st;
        // cases for the calculation
        // case 1:- +
        // case 2:- -
        // case 3:- (
        // case 4:- )
        
        // case 5:- whenever there is a no try to get this no and do the calc with
        // the current sign and also extract the number out of this.
        
        int sign=1;// by def. addition is the key
        int sum=0;
        for(int i=0;i<N;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                int num=0;
                while(s[i]>='0' and s[i]<='9' and i<N)
                {
                    int temp=s[i]-'0';// therefore the no has been captured
                    // but if it is a 2digit or 3 digit no then what ?
                    num= num*10+ temp;
                    
                    i++;
                }
                
                sum= sum+ num*sign;
                i--;
                
            }
            else if(s[i]=='(')
            {
                st.push(sum);
                st.push(sign);
                sum=0;
                sign=+1;
            }
            else if(s[i]==')')
            {
                sum=sum*st.top();st.pop();
                sum+=st.top();st.pop();
            }
            else if(s[i]=='-')
            {
              sign=-1;  
            }
            else if(s[i]=='+')
            {
                    sign=+1;
            }
            
        }
        
        return sum;
        
    }
};