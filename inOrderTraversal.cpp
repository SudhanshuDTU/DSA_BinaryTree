#include<iostream>
using namespace std;
#include<queue>

class Node{
  public:
   int data;
   Node* left;
   Node* right;
 
 Node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;

 }
};

void inOrderTraversal(Node* root){
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