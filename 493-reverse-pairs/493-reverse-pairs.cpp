//......brute force...
//  int count=0;
//         sort(nums.begin(),nums.end(),greater<int>());
//         int n=nums.size();
//         //sort(arr, arr + n, );
//         // [1,3,2,3,1]
//         // 3 3 2 1 1
//     for(auto i:nums)
//     {
//         cout<<i<<" ";
//     }
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]!=nums[i+1])
//             {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(nums[i]>2*nums[j])
//                 {
//                     count++;
//                 }
//             }
//             }
//         }
        
//         return count;
    

class Solution {
public:
    
    
    int  merge(vector<int>&nums,int low,int mid,int high)
    {
        int count=0,j=mid+1;
        for(int i=low;i<=mid;i++)
        {
            while(j<=high && nums[i]> (2LL*nums[j]))
            {
                j++;
            }
            count= count+ (j-(mid+1));
        }
        int i=low;
        j=mid+1;
        vector<int>temp;
        while(i<=mid && j<=high)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i++]);
            }
            else
            {
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid)
        {
             temp.push_back(nums[i++]);
        }
        
        while(j<=high)
        {
            temp.push_back(nums[j++]);
        }
        
        for(int i=low;i<=high;i++)
        {
            nums[i]=temp[i-low];
        }
        
        
        return count;
        
    }
    
    int mergesort(vector<int>&nums,int low,int high)
    {
        if(low>=high) return 0;
        int mid=(high+low)/2;
        int inv=mergesort(nums,low,mid);
        inv+=mergesort(nums,mid+1,high);
        inv+=merge(nums,low,mid,high);
        
        return inv;
    }
     
    int reversePairs(vector<int>& nums)
    {
       int n=nums.size(),a;
    a=mergesort(nums,0,n-1);
        for(auto i:nums)
        {
            cout<<i<<" ";
        }
        return a;
    }
    
    
   };