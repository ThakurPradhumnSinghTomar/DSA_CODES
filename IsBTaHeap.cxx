#include<iostream>
using namespace std;
// given binary tree is a heap or not?

class Solution {
      
      public: 
      
      //checking is tree CBT?
      bool isCBT(struct Node* root, int index, int cnt){
            
            //base cases
            if(root==NULL){
                  return true;
            }
            if(index>cnt){
                  return false;
            }
            else{
                  bool l = isCBT(root->left,2*index+1,cnt);
                  bool r = isCBT(root->right,2*index+2,cnt);
                  return (l&&r);
            }
            
            
      }
      
      
      bool isMaxOrder(struct Node* root){
            
            if(root->left==NULL&&root->right==NULL){
                  return true;
            }
            if(root->right==NULL){
                  return (root->data>root->right->data);
            } 
            else{
                  
                  bool left = isMaxOrder(root->left);
                  bool right = isMaxOrder (root->right);
                  
                  return (left&& right &&root->data>root->left->data&&root->data>root->right->data);
            }
                  
            }
      }
   
};