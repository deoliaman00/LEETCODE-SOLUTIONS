class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        /*
        map<int,int>ans;
        int n=nums.size();
        int aa=0,sum=0;
        ans[0]=1;
        //0->1
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
           // 
            
            if(ans.find(sum-k)!=ans.end())
            {
                aa=aa+ ans[sum-k]+1;
                cout<<aa<<" ";
            }
            ans[sum-k]++;     
        }
         return aa;
        */
        map<int,int> mp;
        int sum=0,ans=0;
        mp[sum] = 1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i];
            int find = sum - k;
            if(mp.find(find) != mp.end()){
                ans += mp[find];
            }
            mp[sum]++;
        }
        return ans;
    }
};