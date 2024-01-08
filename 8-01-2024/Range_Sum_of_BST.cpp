
//This file does'nt contain main and header files only the functional code.
class Solution {
public:
    void solve(TreeNode *root,int low,int high,int &sum)
    {
        if(root==NULL)
        return;
        solve(root->left,low,high,sum);
        if(low<=root->val && root->val<=high)
       {
        //    cout<<root->val<<endl;
           sum+=(root->val);
       }
        solve(root->right,low,high,sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        solve(root,low,high,sum);
        return sum;
    }
};