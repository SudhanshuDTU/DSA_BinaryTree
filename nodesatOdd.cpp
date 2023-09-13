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
 
 
  vector<Node *> nodesAtOddLevels(Node *root)
    {
        vector<Node *>ans;
        if(root==NULL){
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        bool flag = true;
        
        while(!q.empty()){
            int n = q.size();
            vector<Node *>t;
            for(int i=0;i<n;i++){
                Node*temp = q.front();
                q.pop();
                if(flag){
                    t.push_back(temp);
                }
                
                if(temp->left){
                    q.push(temp->left);
                }
            if(temp->right){
                q.push(temp->right);
               }
        }
        flag=!flag;
        for(auto i : t){
            ans.push_back(i);
        }
    }
    
    return ans;
} 