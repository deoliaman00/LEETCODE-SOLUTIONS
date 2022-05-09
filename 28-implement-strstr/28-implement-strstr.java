// class Solution {
// // public int strStr(String haystack, String needle) {
// // int hay_len=haystack.length();
// // int needle_len=needle.length();
// // if(needle_len==0)
// // return 0;
// // if(needle_len>hay_len)
// // return -1;
// // for(int i=0;i<=hay_len-needle_len;i++)
// // {
// // if(needle.equals(haystack.substring(i,i+needle_len)))
// // return i;
// // }
// // return -1;
// // }
// // }

class Solution
{
    public int strStr(String haystack,String needle)
    {
        int l1=haystack.length();
         int l2=needle.length();
        int n1=l1-l2; // only till here search will be implemented
        if(l2>l1)
        {
            return -1;
        }
        if(l2==0)
        {
            return 0;
        }
        for(int i=0;i<=n1;i++)
        {
            if(needle.equals(haystack.substring(i,i+l2)))
            {
                return i;
            }
        }
        return -1;
    }
}