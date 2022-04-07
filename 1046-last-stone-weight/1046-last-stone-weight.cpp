class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        // new syntax priority queue
        // input---->  [2,7,4,1,8,1]
        priority_queue<int> max_heap;  // ---------> 8 7 4 1 2 1
        int n=stones.size();
        for(auto i:stones)
        {
            max_heap.push(i);
        }
        
        int x,y; //x---> smaller element ...............y---> bigger element and x<y
        while(n>1)
        {
            y=max_heap.top(); //...........getting the topmost element of the heap
            max_heap.pop(); // ......deleting the element from the heap..........
            
            
            x=max_heap.top(); //...........getting the topmost element of the heap
            max_heap.pop(); // deleting it again as we will insert new now
            
            n=n-2;    //...  n=6 size of the heap..........now reduced to n=4 ......as we have more no to destroy
            
            if(y-x>0)
            {
                max_heap.push(y-x);
                n=n+1; // ........now we found that y!=x so we will push y-x into heap 
                
            }
            // we will not provide condition to the equal elements as we only want them to get destroyed 
            // so no change in heap is to be done as priority queue will take care of itself.
            
            
        }
        
        if(!max_heap.empty())
            return max_heap.top();
        
        
        return 0;
        
        
    }
};