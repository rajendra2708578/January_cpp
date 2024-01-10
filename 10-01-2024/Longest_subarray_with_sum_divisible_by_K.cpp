class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int>mp;
	    int ans=0,sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        sum=((sum%k)+k)%k;
	        if(sum==0)
	        {
	            ans=max(ans,i+1);
	        }
	        else
	        {
	            if(mp.find(sum)!=mp.end())
	            {
	                ans=max(ans,i-mp[sum]);
	            }
	            else
	            {
	                mp[sum]=i;
	            }
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } 