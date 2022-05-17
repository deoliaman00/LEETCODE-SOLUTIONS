class Solution {
public:
    int romanToInt(string s) 
    {
       unordered_map<char,int> mpp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int sum=mpp[s.back()];
        for(int i=s.length()-2;i>=0;i--)
        {
            if(mpp[s[i]]<mpp[s[i+1]])
            {
                sum=sum-mpp[s[i]];
            }
            else
            {
                sum=sum+mpp[s[i]];
            }
        }
        return sum;
    }
};