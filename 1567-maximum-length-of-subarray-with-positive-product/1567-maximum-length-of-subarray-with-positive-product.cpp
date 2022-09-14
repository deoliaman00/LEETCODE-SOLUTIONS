class Solution {
public:
    int getMaxLen(vector<int>& nums)
    {
        int len=0,firstNeg=-2,firstStart=-1;
        int neg=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                neg=0,firstNeg=-2,firstStart=i;
            }
            else
            {
                if(nums[i]<0)neg++;
                if(neg==1 && firstNeg==-2)firstNeg=i;
                if(neg%2==0)len=max(len,i-firstStart);
                else
                {
                    len=max(len,i-firstNeg);
                }
            }
        }
        return len;
    }
};