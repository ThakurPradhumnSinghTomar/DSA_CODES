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

//..................................................................................................................................

//level order traversal

void lvlOdrTvrsal(Tree *root)
{
    queue<Tree *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Tree *temp = q.front();
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
   int height(Tree * root)
    {
        //base case
        if (root == NULL)
        {
            return 0;
        }

        int l = height(root->left);
        int r = height(root->right);

        int ans = max(l, r) + 1;
        return ans;
    }
    int maxi = 0;

    int diameter(Tree * root)
    {
        if (root == 0)
        {
            return 0;
        }

        int lh = diameter(root->left);
        int rh = diameter(root->right);

        maxi = max(maxi, lh + rh);
        cout << "maxi is " << maxi << endl;
        return 1 + max(lh, rh);
    }
    
    int main(){
          
    }