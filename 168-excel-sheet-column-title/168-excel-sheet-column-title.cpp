class Solution {
public:
    string convertToTitle(int n)
    {
        // z->26
        string ans="";
        
        while(n)
        {
            int remainder=n%26;
          //  case1:- if 1 to 26 then ok
            //case2:- if 0 then 26->z should be done
         if(remainder==0)
         {
             ans="Z"+ans;
             n=n/26-1;
         }
            else
            {
                char f='A'+remainder-1;
                n=n/26;
                ans= f+ ans;
            }
        }
        
        return ans;
    }
};

// bruteforce
//  string A[27]={"","A","B","C","D","E","F","G","H","I","J","K","L","M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
//         string a="";
//         int num;
//         while(n!=0)
//         {
//             if(n<27)
//             {
//                 a+=A[n];
//                 return a;
//             }
//             else
//             {
//                 num=n/26;
//                 if(num<27)
//                 {
//                     a+=A[num];
//                 }
//                 n=n%26;
                
                
//             }
//         }
//         return "";