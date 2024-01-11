


// this file contain only the functional code no header files and main files are included in it.

 void solve(TreeNode *root,int localmax,int localmin,int &maxv)
    {
        if(root==NULL)
        return;
        maxv=max(maxv,abs(localmax-localmin));
        if(root->left)
        solve(root->left,max(localmax,root->left->val),min(localmin,root->left->val),maxv);
        if(root->right)
        solve(root->right,max(localmax,root->right->val),min(localmin,root->right->val),maxv);
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxv=0;
        solve(root,root->val,root->val,maxv);
        return maxv;
    }