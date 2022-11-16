/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        
        int srt=1;
        int end=n;
        while(srt<=end)
        {
            int mid=(end-srt)/2+srt;
            int count=guess(mid);
            if(count==0)
            {
                return mid;
            }
            else if(count==1)// mid<no
            {
                srt=mid+1;
            }
            else if(count==-1)
            {
                end=mid-1;
            }
        }
        return -1;
        
    }
};