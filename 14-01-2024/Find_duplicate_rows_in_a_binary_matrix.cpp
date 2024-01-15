

// this code contain only the functional code no main or header files are included.

vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        vector<int>ans;
        unordered_map<string,int>mp;
        for(int i=0;i<M;i++)
        {
            string str="";
            for(int j=0;j<N;j++)
            {
                str+=matrix[i][j];
            }
            if(mp[str])
            ans.push_back(i);
            
            mp[str]=i+1;
        }
        return ans;
    } 