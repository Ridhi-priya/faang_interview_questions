//Code:

void preOrder(Node* root, vector<int>&v){
    if(root==NULL)
    return;
    v.push_back(root->data);
    preOrder(root->left,v);
    preOrder(root->right,v);
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  vector<int>v;
  preOrder(root,v);
  return v;
  
}
