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
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
         if(inorder[i] == curr){
            return i;
         }
    }
    return -1;
}
Node* buildTree(int preorder[],int inorder[],int start,int end){
    static int idx = 4;

    //base case
    if(start>end){
        return NULL;
    }
   
    int curr = preorder[idx];
    idx--;
    Node* p = new Node(curr);
    
    if(start == end){
        return p;
    }
    int pos = search(inorder,start,end,curr);
    p->left =  buildTree(preorder,inorder,start,pos-1);
    p->right =  buildTree(preorder,inorder,pos+1,end);
    
    return p;
}

void inorderPrint(Node*root){
    //base
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}