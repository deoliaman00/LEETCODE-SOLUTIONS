class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k)
    {
        
        int n = nums.size();
        int prefixSum = 0;
        map<int, int>mp; //map to keep a track of remainders
        mp[0] = -1;
        for (int i = 0; i < n; i++) //at each iteration subarray from (0 to i)
        {
            prefixSum += nums[i];
            int remainder = prefixSum % k;
            if (mp.count(remainder)) //if there exist a subarray sum with same remainder
            { 
                int len =  i - mp[remainder];
                if (len == 1) continue; //don't update map here as we want farthest remainder
                if  (len > 1) return true;
            }
            mp[remainder] = i; //storing the remainder of  current subarray sum  in map
        }
        return false;
        
    }
};