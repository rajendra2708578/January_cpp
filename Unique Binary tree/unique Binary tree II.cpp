


//This code contain only the functional code no header files or main function is included.
class Solution {
public:
    vector<TreeNode*>solve(int start,int end)
    {
        if(start>end)
        return {NULL};
        if(start==end)
        {
            TreeNode *root=new TreeNode(start);
            return {root};
        }
        vector<TreeNode*>ans;
        for(int i=start;i<=end;i++)
        {
            vector<TreeNode*>left_bst=solve(start,i-1);
            vector<TreeNode*>right_bst=solve(i+1,end);
            for(auto it:left_bst)
            {
                for(auto x:right_bst)
                {
                    TreeNode *root=new TreeNode(i);
                    root->left=it;
                    root->right=x;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return solve(1,n);
    }
};
