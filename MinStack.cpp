class MinStack {
    // Given:
    // given some input that requires a stack to be created with stack functions

    // Goal:
    // Design a stack that supports push, pop, top and min in O(1) time 

    // Return:
    // stack

public:

    vector<pair<int, int>> newStack;

    MinStack() {

    }

    void push(int val) {
        if (newStack.empty()) {
            newStack.push_back({ val, val });
        }
        else {
            newStack.push_back({ val, min(newStack.back().second, val) });
        }
    }

    void pop() {
        newStack.pop_back();
    }

    int top() {
        return newStack.back().first;
    }

    int getMin() {
        return newStack.back().second;
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