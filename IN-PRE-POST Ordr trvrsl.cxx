#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

//Binary Tree

class Tree
{
  public:
    int data;
    Tree *left;
    Tree *right;

    //constructor function

    Tree(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

//..................................................................................................................................

Tree *buildTree(Tree *&root)
{
    cout << "Enter the data " << endl;
    int data;
    cin >> data;

    //base case
    if (data == -1)
    {
        return NULL;
    }

    root = new Tree(data);

    cout << "enter the data in left child node of " << data << endl;
    buildTree(root->left);
    cout << "enter the data in right child node of " << data << endl;
    buildTree(root->right);
    return root;
}

    void inOrder(Tree * root)
    {
        //base case
        if (root == NULL)
        {
            return;
        }

        //LNR
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    //..................................................................................................................................

    void preOrder(Tree * root)
    {
        //base case
        if (root == NULL)
        {
            return;
        }

        //NLR
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

    void postOrder(Tree * root)
    {
        //base case
        if (root == NULL)
        {
            return;
        }
        //LRN
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
    int main(){
          
    }
