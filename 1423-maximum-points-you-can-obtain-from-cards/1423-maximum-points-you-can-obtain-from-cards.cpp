class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        // an optimal solution after long hardwork
        // time-> 0(n)............space-> 0(1)
        int n=cardPoints.size();
        //.... [1,2,3,4,5,6,1], k = 3
        int reqSum=0;
        for(int i=n-k;i<n;i++)
        {
            reqSum+=cardPoints[i]; 
        }
        // reqSum= 5+6+1=>12=>i=4/5/6
        int newSum=reqSum;
        
        for(int i=0;i<k;i++)
        {
            // i will run from i=0 to i=2 or 0->1->2
            
            newSum=newSum-cardPoints[n-k+i];
            // n-k+i....=> 7-3+0=>4=>5=>6
            newSum= newSum+ cardPoints[i];
            // i=0/1/2=> cP=> 1==> 1 2===> 1 2 3. end
            
            reqSum=max(reqSum,newSum);
        }
        
        return reqSum;
        
    }
};