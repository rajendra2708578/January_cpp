

// this code is functional code not included any header files or main function  in it.
class MyQueue {
    stack<int>st,st1;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        // st.clear();
        while(!st.empty())
        {
            st.pop();
        }
        while(!st1.empty())
        {
            st.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st.empty())
        {
            st1.push(st.top());
            st.pop();
        }
    }
    
    int pop() {
        int val=st1.top();
        st1.pop();
        return val;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        if(st1.size()==0)
        return true;
        else
        return false;
    }
};