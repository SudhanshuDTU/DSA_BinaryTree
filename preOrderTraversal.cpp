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

void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
   cout<<root->data << " " ;

    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}