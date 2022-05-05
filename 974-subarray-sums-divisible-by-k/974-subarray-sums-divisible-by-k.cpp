class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        int n=nums.size();
        map<int,int>a;
        int sum=0,rem=0,result=0;
        a[0]=1; //..... zero is the case mandatory taken into consideration as 
        //..... the elements whoose sum is going to be divisible by 7 is done.....
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            rem=sum%k;
            
            //case 2:- ess vle mae agar kisi ne negative number eg-> -1...-2..-3..-4....-5...
           //     then adding the k into it gives the positive number eg:-
            //  kn-y => kn-y+k-k => k(n-1)+ (k-y)
            //   -4  => -4+7     => 3 
                    
            if(rem<0)
            {
                rem=rem+k;
            }
            
           // if the element is not present it gives -1 which is equal to end() so it will
           //     run all the time except the case when it is present more then one time
            if(a.find(rem) != a.end())
            {
                //add it to the result
                //this means we have frequency of remainder greater than one 
                result += a[rem];
            }
            a[rem]+=1;
        }
        return result;
        
        
    }
};