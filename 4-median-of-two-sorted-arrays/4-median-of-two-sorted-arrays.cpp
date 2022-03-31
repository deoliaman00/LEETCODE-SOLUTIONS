class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        double sol=1;
       // CASE1:- 1  2  3  3  4  6  7  10  12  15
       // INDEX:- 0  1  2  3  4  5  6  7   8   9  
        multiset<int> m;
        for(auto i:nums1)
        {
            m.insert(i);
        }
        for(auto i:nums2)
        {
            m.insert(i);
        }
        
        int a=m.size(); // SIZE OF THE MULTISET
        // INITIALISING THE ITERATOR TO THE START OF THE MAP
        auto itr=m.begin();
        auto itr1=m.begin();
        
        advance(itr,a/2);   // 0,5
        if(a%2!=0)   // 1!=0
        {
            sol=sol*(*itr);
        }
        else   // 0==0
        {
            advance(itr1,a/2-1);  // 0,4
                sol= (*itr+*itr1)/2.0; // 4,5--> (4+6)/2==5
        }
        
        
        return sol;
    
    
    
    
    
    }
};