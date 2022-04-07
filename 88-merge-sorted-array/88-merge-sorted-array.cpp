class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
    //     cout<<m<<" "<<"n: "<<n;
    //     for(int i = 0 ;i<n;i++)
    //    {
    //        nums1[m+i] = nums2[i];
    //    }
    //    sort(nums1.begin(),nums1.begin()+m+n);
    
        
        
        
        
        int i=0,j=0,k=0;
        vector<int> ans(m+n,0);
            while(i<m && j<n)
            {

                if(nums1[i]<nums2[j])
                {
                    ans[k++]=nums1[i++];
                }
                else
                {
                    ans[k++]=nums2[j++];
                }
            }
        
        for(;i<m;i++)
        {
            ans[k++]=nums1[i];
        }

        for(;j<n;j++)
        {
            ans[k++]=nums2[j];
        }


        for(int i=0;i<m+n;i++)
        {
            nums1[i]=ans[i];
        }
        
        
    }
};