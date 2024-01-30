


//this code contain only the functional code no header files or main function are included.

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(auto it:tokens)
        {
            if(it=="+")
            {
                int b=stoi(st.top());
                st.pop();
                int a=stoi(st.top());
                st.pop();
                int res=(a+b);
                st.push(to_string(res));
            }
            else if(it=="/")
            {
                int b=stoi(st.top());
                st.pop();
                int a=stoi(st.top());
                st.pop();
                int res=(a/b);
                st.push(to_string(res));
            }
            else if(it=="*")
            {
                int b=stoi(st.top());
                st.pop();
                int a=stoi(st.top());
                st.pop();
                int res=(a*b);
                st.push(to_string(res));
            }
            else if(it=="-")
            {
                int b=stoi(st.top());
                st.pop();
                int a=stoi(st.top());
                st.pop();
                int res=(a-b);
                st.push(to_string(res));
            }
            else
            {
                st.push(it);
            }
        }
        int ans=stoi(st.top());
        return ans;
    }
};