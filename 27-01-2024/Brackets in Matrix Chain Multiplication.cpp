




// this code contain only the functional code no header files and main function are not included.

class Solution{
public:
    string createstr(int i,int j,vector<vector<int>>&brackets)
    {
        if(i==j)
        return string(1,'A'+i-1);
        
        return "("+createstr(i,brackets[i][j],brackets)+createstr(brackets[i][j]+1,j,brackets)+")";
    }
    string matrixChainOrder(int arr[], int n){
        // code hereV
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                dp[i][j]=0;
            }
        }
        vector<vector<int>>brackets(n,vector<int>(n,0));
        for(int l=2;l<n;l++)
        {
            for(int i=1;i<n-l+1;i++)
            {
                int j=i+l-1;
                dp[i][j]=INT_MAX;
                for(int k=i;k<j;k++)
                {
                    int cost=dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j];
                    if(cost<dp[i][j])
                    {
                        dp[i][j]=cost;
                        brackets[i][j]=k;
                    }
                }
            }
        }
        return createstr(1,n-1,brackets);
    }
};