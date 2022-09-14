class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int indx=0;
       int low=0,high=arr.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid>0 && mid<high)
            {    if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1] )
                {
                    return mid;
                }
                else if(arr[mid-1]>arr[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else if(mid==0)
            {
                if(arr[mid]<arr[mid+1])
                {
                    return mid+1;
                }
                else
                {
                    return mid;
                }
            }
            else if(mid==high)
            {
                if(arr[mid-1]<arr[mid])
                {
                    return mid;
                }
                else
                {
                    return mid-1;
                }
            }
        }
        return 0;
    }
};

// 0----10---5---2
