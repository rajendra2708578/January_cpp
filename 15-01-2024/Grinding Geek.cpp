

//this code contain only the functional code no header files or main is included.

int solve(int index,int total,vector<int>&cost,vector<vector<int>>&dp)
    {
        if(index==cost.size()|| total==0)
        return 0;
        if(dp[index][total]!=-1)
        return dp[index][total];
        int take=0,nontake=0;
        nontake=solve(index+1,total,cost,dp);
        if(total>=cost[index])
        take=solve(index+1,total-cost[index]+floor(0.9*cost[index]),cost,dp)+1;
    
       
        return dp[index][total]=max(nontake,take);
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
        vector<vector<int>>dp(n+1,vector<int>(total+1,-1));
       return solve(0,total,cost,dp);
    }