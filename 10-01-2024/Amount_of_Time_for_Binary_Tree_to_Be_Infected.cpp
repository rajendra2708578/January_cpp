

// this code contain only the functional code files no main function and header files are included.

class Solution {
public:
    int maxv=0;
    unordered_set<int>st;
    void inflection(TreeNode *root,int sum,unordered_map<TreeNode*,TreeNode*>&mp)
    {
        if(root->left==NULL && root->right==NULL)
        {
            // cout<<"end sums "<<sum<<endl;
            maxv=max(maxv,sum);
            
        }
        if(root->left && st.find(root->left->val)==st.end())
        {
            // cout<<"if true 1"<<endl;
            st.insert(root->left->val);
            inflection(root->left,sum+1,mp);
        }
        if(root->right && st.find(root->right->val)==st.end())
        {
            //  cout<<"if true 2"<<endl;
             st.insert(root->right->val);
            inflection(root->right,sum+1,mp);
        }
        if(mp[root] && st.find(mp[root]->val)==st.end())
        {
             cout<<"if true 3"<<endl;
            st.insert(mp[root]->val);
            inflection(mp[root],sum+1,mp);
        }
        else
        {
            maxv=max(maxv,sum);
        }
    }
    void inorder(TreeNode *root,unordered_map<TreeNode*,TreeNode*>&parent ,TreeNode* &ad,int start)
    {
        if(root==NULL)
        return;

        if(root->val==start)
         ad=root;

        if(root->left)
        {
            parent[root->left]=root;
            inorder(root->left,parent,ad,start);
        }
        if(root->right)
        {
            parent[root->right]=root;
            inorder(root->right,parent,ad,start);
        }
    }
    int amountOfTime(TreeNode* root, int start) {
       unordered_map<TreeNode*,TreeNode*>parent;
       TreeNode *ad=NULL;
       inorder(root,parent,ad,start);
       int sum=0; 
       st.insert(start);
    //    cout<<"ad value check  "<<ad->val<<endl;
       inflection(ad,0,parent);
       return maxv;
    }
};