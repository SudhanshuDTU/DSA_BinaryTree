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

int sumAtK(Node*root,int k){
    int level = 0;
    int sum=0;
   queue<Node*> q;
   
   q.push(root);
   q.push(NULL);

   while(!q.empty()){
      Node*temp = q.front();
      q.pop();

      if(temp==NULL){
          
           if(!q.empty()){
            q.push(NULL);
             level++;
           }
      }
      else{
           if(level ==k){
            sum = sum+ temp->data;
           }
           if(temp->left){
            q.push(temp->left);
           }
           if(temp->right){
            q.push(temp->right);
           }
      }
   }
   return sum;

}