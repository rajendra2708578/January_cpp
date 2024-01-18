
//this code contain only the functional code no header files or main files are included.



 int min_sprinklers(int gallery[], int n)
    {
        // code here
       vector<pair<int,int>>vec(n);
        for(int i=0;i<n;i++)
        {
            if(gallery[i]!=-1)
            {
                vec[i]={i-gallery[i],i+gallery[i]};
            }
            else
            {
                vec[i]={1e8,1e8};
            }
        }
        sort(vec.begin(),vec.end());
        int take=0,index=0,ans=0;
        while(take<n)
        {
            int prev=take-1;
            while(index<n && vec[index].first<=take)
            {
                prev=max(prev,vec[index++].second);
            }
            if(prev+1>take)
            {
                ans++;
                take=prev+1;
            }
            else
            return -1;
        }
        return ans;
    }