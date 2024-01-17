



//this code contain only the functional code no header file or main function is included
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp,mp1;
        for(auto it:arr)
        {
            mp[it]++;
        }
        unordered_set<int>st;
        for(auto it:mp)
        {
            if(st.find(it.second)!=st.end())
                return false;
            st.insert(it.second);
        }
        return true;
    }
};