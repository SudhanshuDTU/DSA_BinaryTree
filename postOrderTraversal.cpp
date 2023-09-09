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

void postOrderTraversal(node* root){
    if(root == NULL){
        return;
    }
   //left  
    postOrderTraversal(root->left);
   
   //right
   postOrderTraversal(root->right);
   
   //node
   cout<< root->data << " " ;
   

}