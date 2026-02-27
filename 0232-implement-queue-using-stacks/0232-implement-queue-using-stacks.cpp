class MyQueue {
    private:
        stack<int> q;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> temp;
    
        while(!q.empty()) {
            temp.push(q.top());
            q.pop();
        }

        // Push new element
        q.push(x);

        // Move everything back
        while(!temp.empty()) {
            q.push(temp.top());
            temp.pop();
        }
    }
    
    int pop() {
        int p = q.top();
        q.pop();
        return p;
    }
    
    int peek() {
        return q.top();
    }
    
    bool empty() {
        return q.empty();
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