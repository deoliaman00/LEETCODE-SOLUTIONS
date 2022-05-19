class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> product(n,0);
        int flag=1;
      //  product[0]=1;
        int g=1;
        for(int i=0;i<n;i++)
        {
            g*=nums[i];
            product[i]=g;
        }
        //            i   
        // eg= 1 2 3  4
        //     1 2 6 12     flag=1
        //            i
        for(int i=n-1;i>0;i--)
        {
           product[i]=product[i-1]*flag;   //flag=12
            flag= flag*nums[i];  // flag=12->24     
        }
        product[0]=flag;
        //   1 12 8 6
        return product;
    }
};