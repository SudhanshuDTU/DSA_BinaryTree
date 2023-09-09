#include<iostream>
using namespace std;

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

int countNodes(Node*root){
    if(root==NULL){
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;

}