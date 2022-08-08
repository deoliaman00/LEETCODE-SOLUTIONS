class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a,int k)
    { int count=0;
        int pro=1;
        int start=0,end=0;
        while(end<a.size())
        {
            pro=pro*a[end];
            while(pro>=k and start<a.size())
            {
                pro=pro/a[start];
                start++;
            }
            if(pro<k)
            {
                count+=end-start+1;
            }
            end++;
        }
        
        return count;
        
        
    }
};