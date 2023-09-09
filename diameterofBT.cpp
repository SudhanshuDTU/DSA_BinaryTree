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

int diameter(Node*root,int *height){
   // lh --> Height of left subtree
    // rh --> Height of right subtree
    int lh = 0, rh = 0;
 
    // ldiameter  --> diameter of left subtree
    // rdiameter  --> Diameter of right subtree
    int ldiameter = 0, rdiameter = 0;
 
    if (root == NULL) {
        *height = 0;
        return 0; // diameter is also 0
    }
 
    // Get the heights of left and right subtrees in lh and
    // rh And store the returned values in ldiameter and
    // ldiameter
    ldiameter = diameter(root->left, &lh);
    rdiameter = diameter(root->right, &rh);
 
    // Height of current node is max of heights of left and
    // right subtrees plus 1
    *height = max(lh, rh) + 1;
 
    return max(lh + rh + 1, max(ldiameter, rdiameter));

}