

// the contain only the functional code no header files and main files are included.

class Solution
{
    public:
    Node *reverse(Node *root)
    {
        Node *prev=NULL;
        Node *nex=NULL;
        Node *cur=root;
        while(cur!=NULL)
        {
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        node1=reverse(node1);
        node2=reverse(node2);
        Node *dummy=newNode(-1);
        Node *temp=dummy;
        while(node1!=NULL && node2!=NULL)
        {
            if(node1->data>=node2->data)
            {
                temp->next=node1;
                temp=temp->next;
                node1=node1->next;
            }
            else
            {
                temp->next=node2;
                temp=temp->next;
                node2=node2->next;
            }
        }
        if(node1!=NULL)
        temp->next=node1;
        
        if(node2!=NULL)
        temp->next=node2;
        
        return dummy->next;
    }  
};
