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

   
       void insert(Tree * &root, int value)
    {
        queue<Tree *> q;
        q.push(root);

        while (!q.empty())
        {
            Tree *temp = q.front();

            q.pop();

            // if (temp == NULL)
            //        {
            //           // cout << endl;

            //            if (!q.empty())
            //            {
            //                q.push(NULL);
            //            }
            //        }
            //        else

            //cout << temp->data << "  ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            else
            {
                temp->left = new Tree(value);
                break;
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
            else
            {
                temp->right = new Tree(value);
                break;
            }
        }
    }
int main(){
}