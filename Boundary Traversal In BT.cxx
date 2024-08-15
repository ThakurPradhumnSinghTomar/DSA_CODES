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


queue<Tree *> leftTrvrsl(Tree * root)
    {
        queue<Tree *> q;
        q.push(root);

        Tree *temp = root;
        cout << temp->data << "   ";
        while (!(temp->left)->left == NULL)
        {
            temp = temp->left;
            q.push(temp);
            cout << temp->data << "   ";
        }
        return q;
    }

    queue<Tree *> leafTrvrsl(Tree * root)
    {
        queue<Tree *> q;
        queue<Tree *> Lq;
        q.push(root);
        q.push(NULL);

        while (!q.empty())
        {
            Tree *temp = q.front();
            q.pop();

            if (temp == NULL)
            {
                if (!q.empty())
                {
                    q.push(NULL);
                }
            }

            else
            {
                if (temp->left == NULL && temp->right == NULL)
                {
                    Lq.push(temp);
                    cout << temp->data << "  ";
                }
                //    cout << temp->data << "  ";
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
        return Lq;
    }

    queue<Tree *> rightTrvrsl(Tree * root)
    {
        queue<Tree *> q;
        stack<Tree *> s;

        Tree *temp = root;
        //cout<<temp->data<<"   ";
        while (!(temp->right)->right == NULL)
        {
            temp = temp->right;
            s.push(temp);
            //cout<<temp->data<<"   ";
        }

        while (!s.empty())
        {
            q.push(s.top());
            cout << s.top()->data << "  ";
            s.pop();
        }
        return q;
    }
    
    int main(){
          
    }