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

void preOrderTraversal(node* root){
    if(root == NULL){
        return;
    }
   cout<<root->data << " " ;

    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}