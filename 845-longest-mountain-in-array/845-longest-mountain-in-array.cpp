class Solution {
public:
    int longestMountain(vector<int>& arr) 
    {
        int indx=1;
        int maxi=0;
        int n=arr.size();
        while(indx<n)
        {
            int i=0,j=0;
            
            
            while(indx<n && arr[indx-1]<arr[indx])i++,indx++;
           // 1=2=3=4=5=6=7
            
            
            while(indx<n && arr[indx-1]>arr[indx])j++,indx++;
            // 7 6 5 4 3 2 1
            
            
            if(i>0 && j>0)
            {
                maxi=max(maxi,i+j+1);
            }
            
            while(indx<n && arr[indx-1]==arr[indx])indx++;
        }
        return maxi;
    }
};