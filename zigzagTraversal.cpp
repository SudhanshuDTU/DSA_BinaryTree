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
 
 
 vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>ans;
    	if(root==NULL){
    	    return ans;
    	}
    	queue<Node*>q;
    	q.push(root);
    	bool leftToright =true ;
    	
    	while(!q.empty()){
    	    int size = q.size();
    	    vector<int> temp(size);
    	    for(int i=0;i<size;i++){
    	        Node*frontNode = q.front();
    	        q.pop();
    	        int index = leftToright ? i : size - i-1;
    	        temp[index] = frontNode->data;
    	        if(frontNode->left){
    	            q.push(frontNode->left);
    	        }
    	         if(frontNode->right){
    	            q.push(frontNode->right);
    	        }
    	        
    	    }
    	    leftToright = !leftToright;
    	    for(auto i:temp ){
    	    ans.push_back(i);
         	}
    	}
    	
    	return ans;
    	
    	
    	
    }