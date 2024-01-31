




// this code contain only the functional code no header files or main function are included.

   void insert(struct TrieNode *root, string key)
        {
            // code here
            
    TrieNode *node=root;
    for(auto x:key)
    {
        if(node->children[x-'a']==NULL){
            node->children[x-'a']=new TrieNode();
        }
        node=node->children[x-'a'];
    }
    node->isLeaf=true;
        }
        
        //Function to use TRIE data structure and search the given string.
        bool search(struct TrieNode *root, string key) 
        {
            // code here
           TrieNode *node=root;
    for(auto x:key){
        if(node->children[x-'a']==NULL){
            return false;
        }
        node=node->children[x-'a'];
    }
    return node->isLeaf;
        }