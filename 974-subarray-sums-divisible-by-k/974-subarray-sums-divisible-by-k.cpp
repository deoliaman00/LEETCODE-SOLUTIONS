class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        int n=nums.size();
        map<int,int>a;
        int sum=0,rem=0,result=0;
        a[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            rem=sum%k;
            if(rem<0)
            {
                rem=rem+k;
            }
            if(a.find(rem) != a.end()){
                //add it to the result
                //this means we have frequency of remainder greater than one 
                result += a[rem];
            }
            a[rem]+=1;
        }
        return result;
        
        
    }
};