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


void solve(Node* root,int &count){
      if(root==NULL){
          return;
      }
      if(root->left !=NULL || root->right!=NULL){
          count++;
      }
      solve(root->left,count);
      solve(root->right,count);
  }
  
    int countNonLeafNodes(Node* root) {
      int count = 0;
      solve(root,count);
      return count;
    }