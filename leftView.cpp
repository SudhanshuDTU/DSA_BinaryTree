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

void leftView(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i=1;i<=n;i++){
            Node*temp = q.front();
            q.pop();
            if(i==1){
                cout<<temp->data<<" ";
            }
            if(temp->left!=NULL){
                q.push(temp->left); 
            }
             if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}