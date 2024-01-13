


// this code contain only the functional code no heade file or main is included in it.
class Solution
{
    public:
    Node* insertfun(Node *root,Node *node)
    {
        if(root==NULL || root->data>=node->data)
        {
            node->next=root;
            root=node;
        }
        else
        {
            Node *cur=root;
            while(cur->next!=NULL && cur->next->data<node->data)
            cur=cur->next;
            
            node->next=cur->next;
            cur->next=node;
        }
        return root;
    }
    
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node *sorted=NULL;
        Node *curr=head_ref;
        while(curr!=NULL)
        {
            Node *nex=curr->next;
            sorted=insertfun(sorted,curr);
            curr=nex;
        }
        return sorted;
    }
    
};