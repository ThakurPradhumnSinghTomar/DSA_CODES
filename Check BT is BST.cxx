#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

//Binary Tree

class TreeNode 
{
  public:
    int val;
    TreeNode *left;
    TreeNode *right;

    //constructor function

    TreeNode (int d)
    {
        this->val= d;
        this->left = NULL;
        this->right = NULL;
    }
};


TreeNode *buildTree(TreeNode*&root)
{
    cout << "Enter the data " << endl;
    int data;
    cin >> data;

    //base case
    if (data == -1)
    {
        return NULL;
    }

    root = new TreeNode (data);

    cout << "enter the data in left child node of " << data << endl;
    buildTree(root->left);
    cout << "enter the data in right child node of " << data << endl;
    buildTree(root->right);
    return root;
}

bool isValidBST(TreeNode* root){
      
      //YE CODE LEETCODE ME NHI CHALA
      
      //base case
      if(root==NULL){
            return true;
            
      }
     
    if(root->left){
      if((root->left)->val>=root->val){
            return false;
      }
    
      
    }
       if(root->right){
      if((root->right)->val<=root->val){
            return false;
      }
      
      
    }
    
     return isValidBST(root->left)&& isValidBST(root->right);
      
      
}


int main(){
      TreeNode* root = NULL;
      buildTree(root);
      cout<<"Given Tree Is BST :  "<<isValidBST(root);
      
      
}
// 10 8 7 -1 -1 9 -1 -1 12 11 -1 -1 13 -1 15 -1 -1