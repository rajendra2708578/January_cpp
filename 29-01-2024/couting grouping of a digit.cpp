

// this code is a functional code no header files and main are included.

	int solve(int index,int sum,string str,vector<vector<int>>&dp)
	{
	    if(index==str.size())
	    return 1;
	    if(dp[index][sum]!=-1)
	    return dp[index][sum];
	    int s=0,a=0;
	    for(int j=index;j<str.size();j++)
	    {
	        s+=str[j]-'0';
	        if(s>=sum)
	        a+=solve(j+1,s,str,dp);
	    }
	    return dp[index][sum]=a;
	}
	int TotalCount(string str){
	    vector<vector<int>>dp(str.size()+1,vector<int>(901,-1));
	    return solve(0,0,str,dp);
	}