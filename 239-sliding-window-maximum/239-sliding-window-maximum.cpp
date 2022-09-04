class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        list<int>ll;
        vector<int>ans;
        int i=0,j=0;
        int maxi=INT_MIN;
        while(j<nums.size())
        {
            while(ll.size()>0 && ll.back()<nums[j])
            {
                ll.pop_back();
            }
            ll.push_back(nums[j]);
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                ans.push_back(ll.front());
                if(ll.front()==nums[i])
                {
                    ll.pop_front();
                }
                i++;
                j++;
            }
            
        }
        return ans;
        
    }
};