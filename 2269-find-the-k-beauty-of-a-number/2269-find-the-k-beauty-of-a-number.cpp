class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
//                 int num1=num;
//         int d,c=0;
//         string ans=to_string(num1);
//         int n=ans.length(),i=0;
//         if(n==2)
//         {
//             return 1;
//         }
//         while(i<n-1)
//         {
//             string a=ans.substr(i,k);
//             cout<<a<<" ";
//             d=stoi(a);
//             if(d!=0)
//             {
//             if(num%d==0)
//             {
//                 c++;
//             }
//             }i++;
//         }
//         if(num<10 && k==1)
//         {
//             return 1;
//         }
        
//         return c;
//     }
        
        
      string x = to_string(num);
        int n = x.length();
        int ans = 0;
        for(int i = 0;i<=(n-k);i++){
            if(stoi(x.substr(i,k)) != 0)
            if(num % stoi(x.substr(i,k)) == 0 )
                ans++;
        }
        return ans;  
        
        
        
    }    
        
        
};