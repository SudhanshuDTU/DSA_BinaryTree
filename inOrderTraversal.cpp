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

void inOrderTraversal(node* root){
    if(root == NULL){
        return;
    }
   //left  
    inOrderTraversal(root->left);
   
   //node
   cout<< root->data << " " ;
   
   //right
   inOrderTraversal(root->right);

}