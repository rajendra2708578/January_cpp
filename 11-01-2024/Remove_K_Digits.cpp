
// this code contain only the functional code no header files or main files are included in it 
// The main concept behind the question is to get as minimum value as possible by elimanating the front greater value if possible opoerations
// we achieve our motive using stack.

class Solution {
  public:
    string removeKdigits(string S, int K) {
         // size of the number .
       int n=S.size();
       stack<char>st;
       for(int i=0;i<n;i++)
       {
           while(!st.empty() && K>0 && st.top()>S[i])
           {
               st.pop();
               K--;
           }
           st.push(S[i]);
       }
       if(st.empty())
       return "0";
    //   cout<<st.size()<<"size of stack "<<K<<endl;
       while(K--)
       {
           st.pop();
       }
       string ans="";
       while(!st.empty())
       {
           ans+=st.top();
           st.pop();
       }
    //   cout<<ans<<endl;
       reverse(ans.begin(),ans.end());
       int i=0;
       while(ans[i]=='0')
       i++;
       ans=ans.substr(i);
    //   cout<<ans<<endl;
       return ans==""?"0":ans;
    }
};