class Solution {
public:
    int numberOfSteps(int num)
    {
        int s=0;
        //int count=0;
        // 14-> 14/2 -> 7-1 -> 6/2 -> 3-1 -> 2/2 -> 1-1 ->0
        while(num!=0)
        {
            if(num%2==0)
            {
                num=num/2;
                s++;
            }
            else
            {
                num=num-1;
                s++;
            }
            
        }
        return s;
        
    }
};