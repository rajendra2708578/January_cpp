

// this code contain only the functional code no header files or main function is included.
int solve(int val,int m,int no,int n)
    {
        if(val>m)
        return 0;
        if(no==n)
        {
            return val<=m;
        }
        int total=0;
        for(int i=val*2;i<=m;i++)
        {
            total+=solve(i,m,no+1,n);
        }
        return total;
    }
    int numberSequence(int m, int n){
        // code here
        int ans=0;
        for(int i=1;i<=m;i++)
        {
            ans+=solve(i,m,1,n);
        }
        return ans;
    }