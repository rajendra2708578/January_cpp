

//User function Template for C++
// this code include only the functional code no header files and main function are include.

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //code here
        vector<int>indegree(n,0);
        vector<int>adj[n];
        for(auto it:prerequisites)
        {
            adj[it[1]].push_back(it[0]);
            indegree[it[0]]++;
        }
        queue<int>pq;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            pq.push(i);
        }
        while(!pq.empty())
        {
            auto it=pq.front();
            pq.pop();
            ans.push_back(it);
            for(auto x:adj[it])
            {
                indegree[x]--;
                if(indegree[x]==0)
                pq.push(x);
            }
        }
        if(ans.size()!=n)
        return {};
        else
        return ans;
        
    }
};