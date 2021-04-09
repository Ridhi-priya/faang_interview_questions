//Code:

bool BST(Node* node,int min,int max){
    if(node == NULL)
    return true;
    
    if(node->data<min || node->data>max)
        return false;
    return (BST(node->left,min,node->data-1) && BST(node->right,node->data+1,max));
}

class Solution
{
    public:
    bool isBST(Node* root){
        return BST(root,INT_MIN,INT_MAX);
    }
};
