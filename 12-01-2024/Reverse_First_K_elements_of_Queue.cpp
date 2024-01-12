

//this files iclude only the functional code no header files and main function is included.
class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>st;
        queue<int>ans;
        while(k--)
        {
            st.push(q.front());
            q.pop();
        }
        while(!st.empty())
        {
            ans.push(st.top());
            st.pop();
        }
        while(!q.empty())
        {
            ans.push(q.front());
            q.pop();
        }
        return ans;
    }
};
