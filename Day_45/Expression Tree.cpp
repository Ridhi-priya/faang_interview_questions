//Code;

class Solution{
  public:
    /*You are required to complete below method */
    int evalTree(node* root) {
        if(root->left==NULL && root->right==NULL)
            return (stoi(root->data));
        int l = evalTree(root->left);
        int b = evalTree(root->right);
        if(root->data == "+")
            return (l+b);
        if(root->data == "-")
            return (l-b);
        if(root->data == "*")
            return (l*b);
        if(root->data == "/")
            return (l/b);
    }
};
