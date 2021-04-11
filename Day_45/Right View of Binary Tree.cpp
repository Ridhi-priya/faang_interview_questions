//Code:

class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root){
        vector<int>v;
        if(root == NULL)
            return v;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=1;i<=n;i++){
                Node *temp = q.front();
                if(i==n)
                 v.push_back(temp->data);
                 if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                q.pop();
            }
        }
        return v;
    }
};
