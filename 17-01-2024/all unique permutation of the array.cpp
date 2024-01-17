

//this code contain only the functional code no header files and main files are included.

class Solution {
  public:
    void solve(int index,vector<int>&arr,int n,set<vector<int>>&st)
    {
        if(index==n)
        {
            // cout<<"enter inside "<<endl;
            // for(auto it)
            st.insert(arr);
        }
        for(int i=index;i<n;i++)
        {
            swap(arr[i],arr[index]);
            solve(index+1,arr,n,st);
            swap(arr[i],arr[index]);
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        set<vector<int>>st;
        vector<vector<int>>ans;
        solve(0,arr,n,st);
        for(auto it:st)
        {
            ans.push_back(it);
        }
        return ans;
    }
};