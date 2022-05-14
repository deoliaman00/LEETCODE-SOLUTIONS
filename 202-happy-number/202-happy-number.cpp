class Solution {
public:
    bool isHappy(int n) 
    {
        int i,val=0;
        set<int>a;
        while(1)
        {
            val=0;
            while(n)
            {
                i=n%10;
                val+=i*i;
                n=n/10;
                
             }
             if(val==1)
                {
                    return true;
                }
                else if(a.find(val)!=a.end())
                {
                    return false;
                }
                a.insert(val);
                n=val;
        }
        return false;
    }
};






// best approach:-
    
    
//     class Solution {
// public:
//     int digitSqSum(int n)
//     {
//        int sum=0;
//         while(n>0)
//         {
//             sum=sum+ ((n%10)*(n%10));
//             n=n/10;
//         }
//         return sum;
//     }
    
//     bool isHappy(int n)
//     {        
//         int temp=n;
//         // this is inside a loop because for no like 1 to 9 this goes into loop'
//         while(1)
//         {
//             if(temp==89)
//                 return false;
//             if(temp==1)
//                 return true;
//             temp=digitSqSum(temp);
//         }
        
//     }
    
//     /*
//     That is because the sum of squares of digits always ends in 1 or 89.
// For example,

// 44 → 32 → 13 → 10 → 1 → 1
// 85 → 89 → 145 → 42 → 20 → 4 → 16 → 37 → 58 → 89
// Therefore any chain that arrives at 1 or 89 will become stuck in an endless loop.

// */
    
    
// };