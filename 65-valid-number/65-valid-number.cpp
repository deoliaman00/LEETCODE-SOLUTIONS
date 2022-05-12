

class Solution {
public:
    bool isNumber(string s)
    {
        bool digitSeen=false,dotSeen=false,eSeen=false;
        int plusMinus=0,n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]-'0'>=0 && s[i]-'0'<=9)
            {
                digitSeen=true;
            }
            else if(s[i]=='+' || s[i]=='-')
            {
                if(plusMinus==2 || (i>0 && (s[i-1]!='e' && s[i-1]!='E')) || i==n-1)
                {
                    return false;
                }
                plusMinus++;
            }
            else if(s[i]=='e' || s[i]=='E')
            {
                if(eSeen || !digitSeen || i==n-1)
                {
                    return false;
                }
                eSeen=true;
            }
            else if(s[i]=='.')
            {
                if(eSeen || dotSeen || (i==n-1 && !digitSeen))
                {
                    return false;
                }
                dotSeen=true;
            }
            else
            {
                return false;
            }
        }
        return true;
    
    }
};

// almost passed

//         // taking the index first so that it applies to all the loops
        
//         int i=0,ptr2=0;
//         if(s[i]=='e')return false;
        
//         if(s[i]=='.')
//         {
//             if(s.size()==1)
//             {
//                 return false;
                
//             }
//              for(;(s[i]>='0' && s[i]<='9');ptr2++,i++)
//                 {
//                     //s[i]=='.'?ptr++:ptr2++;
//                     if(ptr2<1)
//                     {
//                         return false;
//                         break;}
//              }
                        
//         }
//         while(ptr2--)
//         {
//             i--;
//         }
//         //case1: _0084 _2 here the string starts with space so escaping it
//         for(;s[i]==' ';i++){}
        
//         // case2: _+0074 or -90E3
        
        
//         // case3: all the numbers must be between 1 to 9 
//         // therefore the string is true;
//         if(s[i]=='+'|| s[i]=='-') i++;
        
//         // case4: -0.1
//         // one pointer "ptr" checks that .[] or .[][] or []. or [].[][] 
//         // if ptr=0 then false; // if ptr>1 then false as one number has only one decimal 
//         // ["abc", "1a", "1e", "e3", "99e2.5", "--6", "-+3", "95a54e53"]
        
//         int ptr=0;
//         //int  ptr2=0;
        
//         for(ptr=0;(s[i]>='0' && s[i]<='9')|| (s[i]=='.');i++)
//         {
//             //s[i]=='.'?ptr++:ptr2++;
//             if(s[i]=='.')
//             {
//                 ptr++;
//             }
//         }
//         if(ptr>1)
//             return false;
        
//         // exponent checking case
//       //  valid exponent:- 2e10 -90E3 "3e+7", "+6e-1", "53.5e93", "-123.456e789"
//     // ivalid
//         //     "1a", "1e", "e3", "99e2.5",95a54e53
        
//          if(s[i]=='e'|| s[i]=='E')
//             {
//                 i++;
//                 if(s[i]=='+'|| s[i]=='-') i++;
             
                
//                 for(;(s[i]>='0' && s[i]<='9');ptr2++,i++)
//                 {
//                     //s[i]=='.'?ptr++:ptr2++;
//                     if(ptr2<1)
//                     {
//                         return false;
//                         break;
//                     }
//                 }
//          }
        
        
//         for(;s[i]==' ';i++){}
        
//         return s[i]==0; 
