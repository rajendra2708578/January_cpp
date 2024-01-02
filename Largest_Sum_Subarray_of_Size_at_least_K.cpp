// this code contain only the functional code no header files and main files are included
// The logic we used is basically the prefix sum
// then get max value at prefix at the at least distance of k 
// to get max value of we will iterator or run the loop from n-k;
// and store the max value
// and then subtrack the present prefix sum[i] and compared the max sum value.


long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        // vector<long long int>dp(n+1,-1e9);
        vector<long long int>sum(n+1,0);
        for(int i=0;i<n;i++)
        {
            sum[i+1]=sum[i]+a[i];
        }
        // dp[n]=sum[n];
        // dp[0]=0;
       
       long long int maxsum=INT_MIN;
       long long maxv=sum[n];
       for(int i=n-k;i>=0;i--)
       {
           maxv=max(sum[i+k],maxv);
           maxsum=max(maxsum,maxv-sum[i]);
       }
       return maxsum;
    }