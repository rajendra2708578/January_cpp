


// this code contain only the functional code no header files and main function are not included.

 bool check(vector<int>&vec)
    {
        int old=0,even=0;
        for(int i=1;i<=9;i++)
        {
            if(vec[i]%2)
            old++;
        }
        if(old>=2)
        return false;
        else
        return true;
    }
    void solve(TreeNode *root,int &val,vector<int>&vec)
    {
         if(root==NULL)
        return;
        if(root->left==NULL && root->right==NULL)
        {
            vec[root->val]+=1;
             if(check(vec))
            val+=1;
            vec[root->val]-=1;
            return;
        }
       
       vec[root->val]+=1;;
        solve(root->left,val,vec);
        solve(root->right,val,vec);
        vec[root->val]-=1;

    }
    int pseudoPalindromicPaths (TreeNode* root) {
       int val=0;
       vector<int>vec(10,0);
       solve(root,val,vec); 
       
       return val;
    }