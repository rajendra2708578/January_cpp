class Solution {
public:
    void inorder(TreeNode *root,vector<int>&ans)
    {
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->val);
            return;
        }
        if(root==NULL)
        return;
        if(root->left)
        inorder(root->left,ans);
        if(root->right)
        inorder(root->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        if(root1==NULL && root2==NULL)
        return true;
        if(root1==NULL || root2==NULL)
        return false;
       vector<int>vec1,vec2;
       inorder(root1,vec1);
       inorder(root2,vec2);
       if(vec1.size()!=vec2.size())
       return false;
       for(int i=0;i<vec1.size();i++)
       {
           if(vec1[i]!=vec2[i])
           return false;
       }
       return true;
    }
};