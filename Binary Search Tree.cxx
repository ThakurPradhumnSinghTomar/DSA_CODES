//Binary Search Tree

#include<iostream>
#include<queue>
using namespace std;

class Node{
      
 public:
  
       Node* left;
       Node* right;
       int d;
            
      Node(int data){
            
            this->d = data;
            this->left = NULL;
            this->right = NULL;
             
      }
          
};

//constructing a binary search tree 

Node *  cnstrctBst(Node * &root,int data){
      
      //Base Case 
       if(root==NULL){
        
         root = new Node(data);
         return root;
        
       }
       
       if(data < root->d){
        
      root->left =  cnstrctBst(root->left,data);
        
       }
       
   else    if(data > root->d){
        
  root->right= cnstrctBst(root->right,data);
        
       }
       
       return root;
        
         
          }
          
           void lvlOdrTvrsal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->d << "  ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        if (q.front() == NULL && q.size() == 1)
        {
            break;
        }
    }
} 

void enterData(Node* &root){
      int data;
      
      cout<<"enter the data to bst : "<<endl;
      cout<<"enter -1 to stop giving input values "<<endl;
      cin>>data;
      while(data!=-1){
        cnstrctBst(root,data);    
       cout<<"enter the data to bst : "<<endl;
      cin>>data;
      }
}



int main(){
      
   Node * root = NULL;
   enterData(root);   
    lvlOdrTvrsal(root);
      
      
      
  return 0;    
      
}