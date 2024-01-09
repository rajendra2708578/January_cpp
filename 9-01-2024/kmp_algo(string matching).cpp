// this file contain only the functional code no header files or main function is included.

class Solution
{
    public:
    vector<int>ans;
        void compute(string pat,vector<int>&lps)
        {
            lps[0]=0;
            int len=0,i=1;
            while(i<pat.size())
            {
                if(pat[len]==pat[i])
                {
                    len++;
                    lps[i]=len;
                    i++;
                }
                else 
                {
                    if(len!=0)
                    len=lps[len-1];
                    else
                    {
                        lps[i]=0;
                        i++;
                    }
                }
            }
        }
        void solve(string txt,string pat){
            int n=txt.size();
            int m=pat.size();
            vector<int>lps(m);
            compute(pat,lps);
            int i=0,j=0;
            while(i<n)
            {
                if(txt[i]==pat[j]){
                    i++;
                    j++;
                }
                if(j==m){
                    ans.push_back((i-j)+1);
                    j=lps[j-1];
                }
                else if(i<n && txt[i]!=pat[j])
                {
                    if(j!=0)
                    j=lps[j-1];
                    else
                    i++;
                }
            }
        }
        vector <int> search(string pat, string txt)
        {
            //code hee.
            solve(txt,pat);
            return ans;
        }
     
};