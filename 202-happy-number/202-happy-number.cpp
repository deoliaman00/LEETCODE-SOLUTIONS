class Solution {
public:
    bool isHappy(int n)
    {
//         set<int>check;
//         int val,i=0;
//         bool flag=true;
        
//         while(1)
//         {
//             val=n;
//             while(n)
//             {
//                 val=n%10;
//                 val+=i*i;
//                 n=n/10;
//             }
//             if(val==1)
//             {
//                 return true;
//             }
//             else if(check.find(val)!=check.end())
//             {
//                 return false;
//             }
//             check.insert(val);
//             n=val;
//         }
//         return false;
//     //    return flag;
        
        
       //USING SET


    
           set<int> myset;
        int val;
        int index;
        
        while(1)
        {
            val = 0;
            while(n)
            {
                index = n%10;
                val += index*index;
                n /=10;
            }
            if(val==1)
                return true;
            else if(myset.find(val)!=myset.end())
                return false;
            
            myset.insert(val);
            n = val;
        }
        return false;



// //USING TRIAL & ERROR

// class Solution {
// public:
//     bool isHappy(int n) {
    
//         int counter = 6;
//         int val;
//         int index;
        
//         while(counter)
//         {
//             val = 0;
//             while(n)
//             {
//                 index = n%10;
//                 val += index*index;
//                 n /=10;
//             }
//             if(val==1)
//                 return true;
            
//             n = val;
//             counter -= 1;
//         }
//         return false;
//     }
// }; 
       

        
    }
};