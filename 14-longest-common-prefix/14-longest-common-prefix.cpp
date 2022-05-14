class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {   
        // prefix----------> first element of the string 
        // postfix---------> last element of the string 
        int n=strs.size();
        if(n==0 )
        {
            return "";
        }
       //   0       1     2
        //cat  catty     dog 
        sort(begin(strs),end(strs));
        string ans="";
        
        string a=strs[0]; // a= f l i g h t
        string b=strs[n-1]; // b= f l o w e r
        for(int i=0;i<a.length();i++) // 6
        {
            if(a[i]==b[i])
            {
                ans+=a[i]; //ans= f l 
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};