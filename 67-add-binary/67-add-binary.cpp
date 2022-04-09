class Solution {
public:
    string addBinary(string a, string b) 
    {
//         int i =a.length()-1;
//         int j =b.length()-1;
      
//         string ans;
//         int carry=0;
    
//         while(i>=0 || j>=0)
//         {
//             // if condition ensures it dont get appended in the wrong index;
//             int sum=carry;
//             if(i=0)\
//             {
//                 sum+= a[i--]-'0';  // 0+= 1-0---> 1
//             }
//             if(j>=0)
//             {
//                 sum+= a[j--]-'0'; // 1+= 1-0----> 1+1---> 2
//             }
            
//             ans+=to_string(sum%2); //....... 2%2==0----> ans====   0
            
//             carry=sum/2;// carry-----> 2/2----->1
            
            
//         }
//        // if(carry!=0)
//          //   ans=carry;
        
//         cout<<ans;
        
//         reverse(ans.begin(),ans.end());
        
//         return ans;
   
        string result;
        int i = a.length()-1, j = b.length()-1;
        int carry = 0;
        while(i >= 0 || j >= 0){
            int sum = carry;
            if(i >= 0) sum += a[i--] - '0';
            if(j >= 0) sum += b[j--] - '0';
            carry = sum/2;
            result += to_string(sum%2);
        }
        if(carry) result += to_string(carry);
        reverse(result.begin(), result.end());
        return result;    
    
    
    
    
    
    
    
    
    
    }
};