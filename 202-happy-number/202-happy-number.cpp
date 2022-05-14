class Solution {
public:
    bool isHappy(int n)
    {
        set<int>check;
        int val,i=0;
        bool flag=true;
        
        while(1)
        {
            val=0;
            while(n)
            {
                i=n%10;
                val+=i*i;
                n=n/10;
            }
            if(val==1)
            {
                return true;
            }
            else if(check.find(val)!=check.end())
            {
                return false;
            }
            check.insert(val);
            n=val;
        }
        return false;
    //    return flag;
        
    }
};