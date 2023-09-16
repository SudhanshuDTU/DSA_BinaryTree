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
 
 vector <int> bottomView(Node *root) {
       vector <int> ans;
       map<int,int>m;
       queue<pair<Node*,int>>q;
       q.push(make_pair(root,0));
       
       while(!q.empty()){
           pair<Node*,int>temp = q.front();
           q.pop();
           Node*frontNode = temp.first;
           int hd = temp.second;
           
           m[hd] = frontNode->data;
           
           if(frontNode->left){
                 q.push(make_pair(frontNode->left,hd-1));
           }
           if(frontNode->right){
                 q.push(make_pair(frontNode->right,hd+1));
           }
           
       }
       for(auto i : m){
           ans.push_back(i.second);
       }
       return ans;
    }