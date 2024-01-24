
// this function include only the functional code no header files and main function is included.

bool dfs(int node,int parent,vector<int>edge[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:edge[node])
        {
            if(vis[it]==0)
            {
                if(dfs(it,node,edge,vis))
                return true;
            }
            else if(parent!=it)
            return true;
        }
        return false;
    }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        vector<int>edge[n];
        for(auto it:adj)
        {
            edge[it[0]].push_back(it[1]);
            edge[it[1]].push_back(it[0]);
        }
        vector<int>vis(n,0);
        int count=0;
        bool pos=true;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                if(dfs(i,-1,edge,vis)==true)
                pos=false;
                
                count++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            pos=false;
        }
        if(pos==false|| count>=2)
        return 0;
        else 
        return 1;
    }