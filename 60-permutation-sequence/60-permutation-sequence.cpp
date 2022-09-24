class Solution {
public:
    string getPermutation(int n, int k) 
    {
        string ans="";
        vector<int>arr;
        int fact=1;
        k=k-1;// adjusting it to the 0 based indexing 
        for(int i=1;i<n;i++)
        {
            fact=i*fact;// 1->1*2->2*3->(6)
            arr.push_back(i);
        }
        arr.push_back(n);
        // arr[]=> 1 2 3 4 ------- k=16 -----fact=6
        
        while(true)
        {
            // step1: Adding the number to the string which is the starting number
            ans+=to_string(arr[k/fact]);
            // step2: Reducing that number from the string as we have to reduce the permutation from now
            arr.erase(arr.begin()+k/fact);
            // Size reminder;;;;;;;;;;;; n=4 now n=3
            if(arr.size()==0)
            {
                break;
            }
            k=k%fact;
            fact=fact/arr.size();
        }
        
        return ans;
    }
};