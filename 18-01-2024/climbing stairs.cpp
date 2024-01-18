

// this code contain only the functional code no header files or no main is included .
int fun(int n,vector<int>&dp)
    {
        if(n<=0)return 0;
        else if(n==1||n==2) return n;
        if(dp[n]!=-1) return dp[n];
        int take1=fun(n-1,dp);
        int take2=fun(n-2,dp);
        return dp[n]=take1+take2;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return fun(n,dp);
    }