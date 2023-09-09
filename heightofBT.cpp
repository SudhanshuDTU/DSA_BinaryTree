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

int height(Node*root){
    //base case
    if(root==NULL){
        return 0;
    }

    int LHeight = height(root->left);
    int RHeight = height(root->right);
    int maxi = max(LHeight,RHeight);

    return maxi + 1;
    
}