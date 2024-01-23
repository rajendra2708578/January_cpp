



// this code contain only the functional code no header files and main function is included.


class Solution {
public:
    bool check(vector<int>&vec,string str)
    {
        for(auto it:str)
        {
            if(vec[it-'a'])
            return false;
        }
        return true;
    }
    bool fun(string &str)
    {
        unordered_set<char>st;
        for(auto it:str)
        {
            st.insert(it);
        }
        return st.size()==str.size();
    }
    int solve(vector<int>&vec,vector<string>&arr,int index)
    {
        if(index==arr.size())
        return 0;
        int nontaken=0,taken=0;
        nontaken=solve(vec,arr,index+1);
        if(check(vec,arr[index]))
        {
            int a=solve(vec,arr,index+1);
            for(auto it:arr[index])
            {
                vec[it-'a']++;
            }
            int b=solve(vec,arr,index+1)+arr[index].size();
            for(auto it:arr[index])
            {
                vec[it-'a']--;
            }
            taken=max(a,b);
        }
        return max(nontaken,taken);
    }
    int maxLength(vector<string>& arr) {
        vector<string>vec;
        for(auto it:arr)
        {
            if(fun(it))
            vec.push_back(it);
        }
        vector<int>no(26,0);
        return solve(no,vec,0);
    }
};