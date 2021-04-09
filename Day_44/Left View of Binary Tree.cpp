//Code:

vector<int> leftView(Node *root){
   vector<int>res;
   if(root==NULL)
   return res;
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
       int n = q.size();
       for(int i=1;i<=n;i++){
           Node *temp = q.front();
           if(i==1)
           res.push_back(temp->data);
           
           q.pop();
           if(temp->left)
            q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
       }
   }
   return res;
}
