// class MyStack {
// public:
//     queue<int>q1;
//         queue<int>q2;
//     MyStack()
//     {}
    
//     void push(int x) 
//     {
//         //.....Steps.....insert in q2....swap all ele in q2 of q1......swap all ele in q1 from q2.....
//         q2.push(x);
//         while(q1.empty()==0)
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
        
//          while(q2.empty()==0)
//         {
//             q1.push(q2.front());
//             q2.pop();
//         }
        
        
//     }
    
//     int pop()
//     {
//         int a=q1.front();
//         q1.pop();
//         return a;
        
//     }
    
//     int top() 
//     {
//         int a=q1.front();
//         return a;
        
//     }
    
//     bool empty()
//     {
//         if(q1.empty()==0)
//         {
//             return false;
//         }
//         else
//         {
//             return true;
//         }
        
//     }
// };

// /**
//  * Your MyStack object will be instantiated and called as such:
//  * MyStack* obj = new MyStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->top();
//  * bool param_4 = obj->empty();
//  */



















//........................using one queue..........

class MyStack {
public:
queue<int> q;
	// Push element x onto stack.
	
    
    void push(int x)
    {
		q.push(x);
		for(int i=0;i<q.size()-1;++i)
        {
			q.push(q.front());
			q.pop();
		}
        cout<<q.front()<<endl;
	}
    
    int pop() 
    {
        int a1=q.front();
        q.pop();
        return a1;
        
    }
    
    int top()
    {
        return q.front();
        
    }
    
    bool empty()
    {
        return (q.empty()==0)?false:true;
        
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