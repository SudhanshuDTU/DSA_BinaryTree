#include<iostream>
using namespace std;
#include<queue>

class node{
  public:
   int data;
   node* left;
   node* right;
 
 node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;

 }
};

node* buildTree(node* root){
  cout<<"Enter the data: "<<endl;
  int data;
  cin>>data;
  root = new node(data);
  
  if(data == -1){
    return NULL;
  }
 cout<<"enter data for inserting in left of"<< data<<endl;
 root->left = buildTree(root->left);

 cout<<"enter data for inserting in right of"<<data<<endl;
 root->right = buildTree(root->right);
  
 return root;
}

void levelOrderTraversal(node* root){ 
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
       node*temp = q.front();

       if(temp == NULL){
         cout<<endl;
          if(!q.empty()){
            q.push(NULL);
          }
       }
       else{
       cout<<temp->data<<" ";
       q.pop();
       if(temp->left){
         q.push(temp->left);
       }
       if(temp->right){
         q.push(temp->right);
       }

       }

    }

}

int main(){
    node* root = NULL;

    //creating tree
    root = buildTree(root);


}