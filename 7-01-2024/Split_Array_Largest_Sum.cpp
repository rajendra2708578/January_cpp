
// this include one the function code no header files and main files are included in it.
// this is one of the first approach having time complexity of O(N*N*K) 
// logic is easy we just try partition of array into more subarray using loop to where to part it


#define ll long long int
class Solution {
public:
    ll solve(vector<int>&nums,int index,int k,vector<vector<ll>>&dp)
    {
        ll sum=0;
        if(k==1)
        {
            for(int j=index;j<nums.size();j++)
            {
                sum+=nums[j];
            }
            return sum;
        }
        ll ans=INT_MAX;
        
        if(dp[index][k]!=-1)
        return dp[index][k];
        for(int j=index;j<nums.size();j++)
        {
            sum+=nums[j];
            ans=min(ans,max(sum,solve(nums,j+1,k-1,dp)));
        }
        return dp[index][k]=ans;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int n=nums.size();
       vector<vector<ll>>dp(n+1,vector<ll>(k+1,-1));
        return solve(nums,0,k,dp);
    }
};


// this is the second approach having time complexity 0log(sum(arr)))
// there we can use the binary search method to solve
// the concept is we check if value is capable of distributed amongs the array at max k times.


#define ll long long int
class Solution {
public:
    ll solve(vector<int>&nums,int index,int k,vector<vector<ll>>&dp)
    {
        ll sum=0;
        if(k==1)
        {
            for(int j=index;j<nums.size();j++)
            {
                sum+=nums[j];
            }
            return sum;
        }
        ll ans=INT_MAX;
        
        if(dp[index][k]!=-1)
        return dp[index][k];
        for(int j=index;j<nums.size();j++)
        {
            sum+=nums[j];
            ans=min(ans,max(sum,solve(nums,j+1,k-1,dp)));
        }
        return dp[index][k]=ans;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int n=nums.size();
       vector<vector<ll>>dp(n+1,vector<ll>(k+1,-1));
        return solve(nums,0,k,dp);
    }
};
