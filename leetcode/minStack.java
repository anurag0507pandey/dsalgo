class MinStack {
public:
    vector<long long int> minStack;
    long long int minVal = 0;

    MinStack() {
    }
    
    void push(int val) {
        if (minStack.empty()) {
            minStack.push_back(val);
            minVal = val;
        }
        else {
            if (minVal > val) {
                long long int  x = 2 * (long long) val - minVal; 
                minStack.push_back(x);
                minVal = val;
            }
            else {
                minStack.push_back(val);
            }
        }
    }
    
    void pop() {
        if (minVal > minStack[minStack.size() - 1]){
            minVal = 2 * minVal - minStack[minStack.size() - 1];
            minStack.pop_back();
        }
        else {
            minStack.pop_back();
        }
    }
    
    int top() {
        if (minVal >  minStack[minStack.size() - 1])
            return minVal;
        else
            return  minStack[minStack.size() - 1];
    }
    
    int getMin() {
        return minVal;
    }
};
