

//this code contain only the functional code no header files and main function is included.
int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        for(auto it:t)
        {
            if(mp[it]>0)
            {
                mp[it]--;
            }
        }
        int totalsum=0;
        for(auto it:mp)
        {
            totalsum+=it.second;
        }
        return totalsum;
    }