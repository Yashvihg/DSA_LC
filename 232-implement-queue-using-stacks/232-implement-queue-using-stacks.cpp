class MyQueue {
public:
    stack<int> ip, op;
    
    MyQueue() {
       
    }
    
    void push(int x) {
        ip.push(x);
    }
    
    int pop() {
        if(op.empty()){
                while(ip.size()){
                op.push(ip.top()), ip.pop();
            }
        }
        int popped = op.top();
        op.pop();
        return popped;
            
    }
    
    int peek() {
        if(op.empty()){
                while(ip.size()){
                op.push(ip.top()), ip.pop();
            }
        }
        return op.top();
    }
    
    bool empty() {
        return op.empty() && ip.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */