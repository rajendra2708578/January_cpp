

//this code is the functional code no header files or main functions are included.

class Solution
{
    public:
    void solve(int sum,Node *root,int target,vector<int>&vec,vector<vector<int>>&st)
    {
        if(root==NULL)
        return;
        vec.push_back(root->key);
        if(sum+root->key==target)
        {
            st.push_back(vec);
        }
        solve(sum+root->key,root->left,target,vec,st);
        solve(sum+root->key,root->right,target,vec,st);
        vec.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector<vector<int>>ans;
        vector<int>vec;
        // set<vector<int>>st;
        solve(0,root,sum,vec,ans);
       
        return ans;
    }
};