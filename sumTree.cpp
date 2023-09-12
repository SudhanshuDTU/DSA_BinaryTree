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


bool isLeaf(Node* root) {
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        return false;
  
}
  bool solve(Node*root){
      //base case
      if(root == NULL || isLeaf(root)){
          return true;
      }
      
      bool leftSubTree = solve(root->left);
      bool rightSubTree= solve(root->right);
      
       int leftSum = 0;
       int rightSum = 0;

    if (root->left) {
        if (isLeaf(root->left)) {
            leftSum = root->left->data;
        } else {
            leftSum = 2 * root->left->data; // Double the value for non-leaf nodes
        }
    }

    if (root->right) {
        if (isLeaf(root->right)) {
            rightSum = root->right->data;
        } else {
            rightSum = 2 * root->right->data; // Double the value for non-leaf nodes
        }
    }
      
      return ((root->data == leftSum+rightSum) && leftSubTree &&rightSubTree);
      
  }
    
    bool isSumTree(Node* root)
    {
        return solve(root);
        
    }