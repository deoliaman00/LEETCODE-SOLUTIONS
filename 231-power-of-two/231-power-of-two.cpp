class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        int a=1;
        
         for(int i=0;i<=30;i++)
        {
             
            if(n==a)
            {
                return true;
            }
             if(a<INT_MAX/2)
             {
                a=a*2;
             }
             
        }
        return false;
    }
    };
// app2
// class Solution {
// public:
//     bool isPowerOfTwo(int n)
//     {
//         for(int i=0;i<=30;i++)
//         {
//             if(n==pow(2,i))
//             {
//                 return true;
//             }
//             if(n<pow(2,i))
//             {
//                 return false;
//             }
            
//         }
//         return false;
//     }
// };
