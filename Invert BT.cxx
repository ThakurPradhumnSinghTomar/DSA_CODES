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
    int data;
    TreeNode *left;
    TreeNode *right;

    //constructor function

    TreeNode (int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode *buildTree(TreeNode *&root)
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

//..................................................................................................................................

//level order traversal

void lvlOdrTvrsal(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        TreeNode *temp = q.front();
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
            cout << temp->data << "  ";
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

TreeNode *invertBT(TreeNode *root)
{
    //Base Case
  if(root==NULL)
  { return root; }
  
  TreeNode* temp = root->left;
  root->left=root->right;
  root->right=temp;
  
  invertBT(root->left);
  invertBT (root->right);
  
  
}

int main(){
      TreeNode* root = NULL;
      buildTree(root);
      lvlOdrTvrsal(root);
      cout<<"\n"<<endl;
       invertBT(root);
         lvlOdrTvrsal(root);
       
      
      
}
// 4 2 1 -1 -1 -1 7 6 -1 -1 9 -1 -1
 