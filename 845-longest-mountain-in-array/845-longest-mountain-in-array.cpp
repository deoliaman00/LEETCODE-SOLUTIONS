class Solution {
public:
    int longestMountain(vector<int>& A) 
    {
        int maxLength = 0;
        int i = 1;
        
        while (i < A.size()) {
            int increasing = 0, decreasing = 0;
            
            while(i < A.size() && A[i - 1] < A[i]) i++, increasing++;
            while(i < A.size() && A[i - 1] > A[i]) i++, decreasing++;
            
            if (increasing > 0 && decreasing > 0) maxLength = max(maxLength, increasing + decreasing + 1);
            
            while(i < A.size() && A[i - 1] == A[i]) i++;
        }
        return maxLength;
//         int j=1;
//         int n=arr.size();
//         int maxi=0;
//         while(j<n)
//         {
//             int inc=0,dec=0;
//             while(j<n && arr[j]>arr[j-1])inc++,j++;
//             while(j<n && arr[j]<arr[j-1])dec++,j++;
//             if(inc>0 && dec>0)
//             {
//                  maxi=max(maxi,inc+dec+1);
//             }
           
//             j++;
//         }
        
//         return maxi;
        
    }
};