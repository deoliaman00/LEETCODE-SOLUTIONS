class KthLargest {
public:
    
    priority_queue<int,vector<int>,greater<int>> min_eap;
    int size;
    KthLargest(int k, vector<int>& nums)
    {
        //
       // syntax for min heap ,,,,eg-> bottom-> 10 8 5 3 2 <- top
        
        for(auto i:nums)
        {
        min_eap.push(i);
        if(min_eap.size()>k)
        {
            min_eap.pop();
        }
        }
        size=k;
    }
    
    int add(int val) 
    {
        min_eap.push(val);
        if(min_eap.size()>size)
        {
            min_eap.pop();
        }
        
        return min_eap.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */