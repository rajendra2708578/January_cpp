


//this code contain only the functional code no header files or no main function is included.

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;
        set<int>st;
        for(auto it:matches)
        {
            mp[it[1]]++;
            st.insert(it[0]);
            
        }
        vector<vector<int>>ans;
        vector<int>vec1,vec2;
        for(auto it:st)
        {
            if(mp[it]==0)
            vec1.push_back(it);
        }
        for(auto it:mp)
        {
            if(it.second==1)
            vec2.push_back(it.first);
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        ans.push_back(vec1);
        ans.push_back(vec2);
        return ans;
}