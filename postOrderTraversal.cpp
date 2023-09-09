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

void postOrderTraversal(Node* root){
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