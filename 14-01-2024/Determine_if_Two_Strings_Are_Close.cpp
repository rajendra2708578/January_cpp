
// this code contain only the main functional no header files and main code in it.

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
        return false;
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        if(word1==word2)
        return true;
        vector<int>vec1,vec2;
        unordered_map<char,int>mp,mp1;
        set<char>st,st1;
        for(auto it:word1)
        {
            mp[it]++;
            st.insert(it);
        }
        for(auto it:word2)
        {
            mp1[it]++;
            st1.insert(it);
        }
        for(auto it:mp)
        {
            vec1.push_back(it.second);
        }
        for(auto it:mp1)
        {
            vec2.push_back(it.second);
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        if(vec1==vec2 && st==st1)
        return true;
        else
        return false;
    }
};