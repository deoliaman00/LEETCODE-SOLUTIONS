class Solution {
public:
    int maximum69Number (int num)
    {
        string arr=to_string(num);
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=='6')
            {
                arr[i]='9';
                break;
            }
        }
        
        int ans=stoi(arr);
        
        return ans;
        
    }
};