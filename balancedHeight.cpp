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
// int height(Node*root){
//     if(root==NULL){
//         return 0;
//     }
//     int lh =height(root->left);
//     int rh = height(root->right);

//     return max(lh,rh)+1;
// }

bool balanced(Node*root,int &height){ 
    if(root==NULL){
       
        return true; //empty node
    }
   int lh=0;
   int rh=0;

   if(balanced(root->left,lh) == false){
    return false;
   }
    if(balanced(root->right,rh) == false){
    return false;
   }

   height = max(lh,rh)+1;
   if(abs(lh-rh)<=1){
    return true;
   }
   else{
    return false;
   }


}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    int height = 0;
   if(balanced(root,height)){
    cout<<"balanced tree";
   }
   else{
      cout<<"NOT balanced tree";
   }
}