




// this code is functional code no header file or main function is included

#define ll long long int
const int mod=1e9+7;
class Solution {
public:
    int solve(int sr,int sc,int r,int c,int maxm,vector<vector<vector<ll>>>&dp)
    {
        if(sr<=0||sr>r||sc<=0||sc>c)
        return 1;
        int total=0;
        if(dp[sr][sc][maxm]!=-1)
        return dp[sr][sc][maxm];
        ll left=0,right=0,up=0,down=0;
        if(maxm>0)
        {
            left=solve(sr,sc-1,r,c,maxm-1,dp);
            right=solve(sr,sc+1,r,c,maxm-1,dp);
            up=solve(sr-1,sc,r,c,maxm-1,dp);
            down=solve(sr+1,sc,r,c,maxm-1,dp);
        }
        return dp[sr][sc][maxm]=(left+right+up+down)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<ll>>>dp(m+1,
        vector<vector<ll>>(n+1,vector<ll>(maxMove+1,-1)));
        return solve(startRow+1,startColumn+1,m,n,maxMove,dp);
    }
};