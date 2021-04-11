//Code:

void inOrder(struct Node *root,vector<int>&v, int k){
    if(root == NULL)
        return;
    if(k==0)
        v.push_back(root->data);
    inOrder(root->left,v,k-1);
    inOrder(root->right,v,k-1);
}

// function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k){
    vector<int>v;
    inOrder(root, v,k);
    return v;
}
