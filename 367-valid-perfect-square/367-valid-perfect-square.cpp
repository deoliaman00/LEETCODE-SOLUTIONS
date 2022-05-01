class Solution {
public:
    bool isPerfectSquare(int num) 
    {
//     {
//         if(num==1) return true;
//         long long int sum=0;
        
//         int  n=1;
//         for(;n<num;n++)
//         {
//             sum+=n;
//             if(num==sum)
//             {
//                 return true;
//             }
//             n++;
//         }
//         return false;
        
        
        if(num == 0 || num == 1) return true;
        long low = 1,high = num/2; //do it with long instead of int
        while(low<=high){
            long mid = (low+high)/2;
            if(mid*mid == num)
                return true;
            else if(mid*mid < num)
                low = mid+1;
             else if(mid*mid > num)
                high = mid-1;
        }
        return false;

        
    }
};