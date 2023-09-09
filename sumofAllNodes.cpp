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

int sumofAllNodes(Node*root){
    //base case 
    if(root == NULL){
        return 0;
    }

 return sumofAllNodes(root->left) +sumofAllNodes(root->right) + root->data;
}