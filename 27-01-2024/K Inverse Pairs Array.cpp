

// this code contain only the functional code no header files or main function are included/

#define ll long long int
const int mod=1e9+7;

class Solution {
public:
    int solve(int n,int k,vector<vector<ll>>&dp)
    {
        if(n==0)
        return 0;
        if(k==0)
        return 1;
        int val=0;
        if(dp[n][k]!=-1)
        return dp[n][k];
        for(int j=0;j<n && k-j>=0;j++)
        {
            val=(val+solve(n-1,k-j,dp))%mod;
        }
       return dp[n][k]=val;
    }
    int kInversePairs(int n, int k) {
        vector<vector<ll>>dp(n+1,vector<ll>(k+1,-1));
        return solve(n,k,dp);
    }
};