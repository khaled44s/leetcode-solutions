class MyQueue {
private:
    stack<int>stack1, stack2;
public:
    MyQueue() {
        while(!stack1.empty()) {
            stack1.pop();
        }
        while(!stack2.empty()) {
            stack2.pop();
        }
    }
    
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
        this -> peek();
        int poppedElement = stack2.top();
        stack2.pop();
        return poppedElement;
    }
    
    int peek() {
        if (stack2.empty()) {
            while(!stack1.empty()) {
                int x = stack1.top();
                stack1.pop();
                stack2.push(x);
            }
        }
        return stack2.top();
    }
    
    bool empty() {
        if (stack1.empty() && stack2.empty()) {
            return true;
        }
        return false;
    }
};
