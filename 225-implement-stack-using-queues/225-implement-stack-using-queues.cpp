class MyStack {
public:
    queue<int>q1;
        queue<int>q2;
    MyStack()
    {}
    
    void push(int x) 
    {
        //.....Steps.....insert in q2....swap all ele in q2 of q1......swap all ele in q1 from q2.....
        q2.push(x);
        while(q1.empty()==0)
        {
            q2.push(q1.front());
            q1.pop();
        }
        
         while(q2.empty()==0)
        {
            q1.push(q2.front());
            q2.pop();
        }
        
        
    }
    
    int pop()
    {
        int a=q1.front();
        q1.pop();
        return a;
        
    }
    
    int top() 
    {
        int a=q1.front();
        return a;
        
    }
    
    bool empty()
    {
        if(q1.empty()==0)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */