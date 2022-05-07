// bruteforce 94/117 testcase passes ... time-> 0(n^2)...space-> 0(n)
// int n=nums.size();
//         int j,k;
//         //  [1,2,3,4]
//         // [3,1,4,2]
//         // [1,0,1,-4,-3]
//         // [2,4,3,1]
//         for(int i=0;i<n;i++)
//         {
//             j=i+1,k=n-1;
//             while(j<k)
//             {
//                 if(nums[i]<nums[j] && nums[j]>nums[k] && nums[k]>nums[i])
//                 {
//                     return true;
//                 }
//                 else if(nums[j]<nums[k] || nums[k]<nums[i])
//                 {
//                     k--;
//                 }
//                 else
//                 {
//                     j++;
//                 }
                
//             }
//         }
//         return false;
        


class Solution {
public:
    bool find132pattern(vector<int>& nums)
    {
    //   int mini=INT_MAX,k=0,n=nums.size();
    // vector<int>marker;
    //     for(auto i:nums)
    //     {
    //         if(i<mini)
    //         {
    //             marker[k++]=i;
    //         }
    //     }
    //     cout<<k<<endl;
    //     stack<int>a;
    //     a.push(nums[n-1]);
    //     for(int i=n-1;i>=0;i--)
    //     {
    //         if(a.top()>marker[i] && a.top()<nums[i])
    //         {
    //             return true;
    //         }
    //         else
    //         {
    //             a.pop();
    //             a.push(nums[i]);
    //             i--;
    //         }
    //     }
    //     return false;
        
         int s3 = INT_MIN;
        
        stack<int> st;
        
        for( int i = nums.size()-1; i >= 0; i -- )
        {
            if( nums[i] < s3 ) 
            {
                return true;
            }
            
            else 
            {
                while( !st.empty() && nums[i] > st.top() )
                { 
                  s3 = st.top(); st.pop(); 
                }
                st.push(nums[i]);
            }
            
        }
        return false;
    }
};