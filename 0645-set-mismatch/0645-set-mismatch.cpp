class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        set<int>st;
        int n=nums.size()+1;
        int ini=accumulate(nums.begin(),nums.end(),0);//----1 1---> 2
        for(auto i:nums)
            st.insert(i);
        int realsum=accumulate(st.begin(),st.end(),0);//----1--->1
        
        int missinNo=ini-realsum;//----(2-1)=>1
        int Nreal=n*(n-1)/2;//--->3x2/2=> 3
        int sNo=Nreal-realsum;// 3-2=> 1
        
        return {missinNo,sNo};
    }
};