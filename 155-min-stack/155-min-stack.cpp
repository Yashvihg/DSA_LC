class MinStack {
public:
    stack<int> s, mins;
    
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(mins.empty() || mins.top()>=val)
            mins.push(val);
    }
    
    void pop() {
        if(s.empty()) return;
        int ans = s.top();
        s.pop();
        if(mins.top() == ans)
            mins.pop();
    }
    
    int top() {
        if(s.empty()) return -1;
        return s.top();
    }
    
    int getMin() {
        if(s.empty())return -1;
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */