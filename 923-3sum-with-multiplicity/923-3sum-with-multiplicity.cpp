class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) 
    {
        long res=0;
        
        vector<long>count(101,0); // this is for the size given by qustn
        for(auto i:arr)
        {
            count[i]++;
        }
        
        for(int i=0;i<=100;i++)
        {
            for(int j=i;j<=100;j++)
            {
                int k=target-i-j; // k=5-0-1=>4 .....k=5-0-2=>3.......5-0-3=>2....5-0-1=4
                
                if(k<0 || k>100)
                    continue;
                else if(i==j && j==k)  //.....(2,2,2)--> 2 occurs 3 times----> 3c2----> 3*2*1/6--->1
                {
                    res+= (count[i]*(count[i]-1)*(count[i]-2))/6;
                }
                 else if(i==j && j!=k)  // (2,2,4)----> 2 occurs 2 times 4 occurs 1 time----> 2c2 * 2c1----> 1*2--->2
                {
                    res+= 1*count[k]*((count[i]*(count[i]-1))/2);
                }
                else if(i<j && j<k)  ///// (1,3,4)------> 1 ocuurs 2 times -------3 occurs 2 times---------4 occurs 2times 
                {
                    res+=count[i]*count[j]*count[k]; // result= 2c1 * 2c1 * 2c1
                }       
            
            }
        }
            
         return res % int(1e9 + 7);
    }
};