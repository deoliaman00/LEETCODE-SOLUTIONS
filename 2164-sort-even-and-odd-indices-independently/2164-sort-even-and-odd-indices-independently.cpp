class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        int n=nums.size();
        
      vector<int>arr(n),p,q;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                p.push_back(nums[i]); // even vale
            }
            else
            {
                q.push_back(nums[i]); // odd vale
            }
        }
        sort(p.begin(),p.end());
        sort(q.rbegin(),q.rend());
        int k=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                arr[i]=p[k++];
            }
            else
            {
                arr[i]=q[j++];
            }
        }
        
        return arr;
        
        
    }
};