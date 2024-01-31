

//this code contain only the functional code no header files or main are included.

vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>vec(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && temperatures[st.top()]<=temperatures[i])
            {
                // cout<<" pop out  "<<st.top()<<endl;
                st.pop();
            }
            if(st.empty())
            vec[i]=0;
            else
            vec[i]=st.top()-i;
            // if(!st.empty())
            // cout<<"Not empty and top "<<st.top()<<endl;
            // else
            // cout<<"Empty "<<endl;

            st.push(i);
        }
        return vec;
    }