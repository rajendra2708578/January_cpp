



// this code contain only the functional part no header files or main are included in it.

//User function Template for C++
#define N 10000
bool prime[N];
bool call=false;
bool primefun()
{
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
   
}
class Solution{   
public:
    int solve(int Num1,int Num2)
    {   
      if(call==false)
      {
          primefun();
          call=true;
      }
      queue<pair<int,int>>q;
      q.push({0,Num1});
      unordered_set<int>st;
      st.insert(Num1);
      while(!q.empty())
      {
          auto it=q.front();
          q.pop();
          int dis=it.first;
          int no=it.second;
          if(no==Num2)
          return dis;
          string str=to_string(no);
          for(int i=0;i<str.size();i++)
          {
              char og=str[i];
              for(char ch='0';ch<='9';ch++)
              {
                  if(i==0 && ch=='0')
                  continue;
                  str[i]=ch;
                  int val=stoi(str);
                  if(prime[val]==true && st.find(val)==st.end())
                  {
                      q.push({dis+1,val});
                    //   cout<<" value "<<val<<endl;
                      st.insert(val);
                  }
              }
              str[i]=og;
          }
      }
      return -1;
    }
};