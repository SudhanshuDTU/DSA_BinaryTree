int sum = INT_MIN;
    int height(Node*root){
        if(root==NULL){
            return 0;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        return max(lh,rh)+1;
    }
    void findsum(Node*root,int height ,int level){
        if(root==NULL){
            return ;
        }
        if(root->left){
            root->left->data = root->left->data + root->data;
        }
        if(root->right){
            root->right->data = root->right->data + root->data;
        }
        findsum(root->left,height,level+1);
        findsum(root->right,height,level+1);
         if(level==height){
             sum = max(sum,root->data);
         }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        int h = height(root);
        findsum(root,h,1);
        return sum;
    }