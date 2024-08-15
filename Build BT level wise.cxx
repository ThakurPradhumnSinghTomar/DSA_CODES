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

void buildFromLevelOrder(Tree * root)
    {
        queue<Tree *> q;

        cout << "enter the data for root" << endl;
        int data;
        cin >> data;
        root = new Tree(data);
        q.push(root);
        while (!q.empty())
        {
            Tree *temp = q.front();
            q.pop();

            cout << "enter the data for left node for  " << root->data << endl;
            int leftdata;
            cin >> leftdata;

            if (leftdata != -1)
            {
                temp->left = new Tree(leftdata);
                q.push(temp->left);
            }

            cout << "enter the data for right node for  " << root->data << endl;
            int rightdata;
            cin >> rightdata;

            if (rightdata != -1)
            {
                temp->right = new Tree(rightdata);
                q.push(temp->right);
            }
        }
    }
    
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

int main(){
      
      
}