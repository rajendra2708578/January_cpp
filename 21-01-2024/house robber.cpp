


//this code contain only the functional code no header files or main function is included.


class Solution {
public:
    int solve(int index,vector<int>&nums,vector<int>&dp)
    {
        if(index>=nums.size())
        return 0;
        if(dp[index]!=-1)
        return dp[index];
        int take=0,nontake=0;
        take=solve(index+2,nums,dp)+nums[index];
        nontake=solve(index+1,nums,dp);
        return dp[index]=max(take,nontake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
       return solve(0,nums,dp);
    }
};