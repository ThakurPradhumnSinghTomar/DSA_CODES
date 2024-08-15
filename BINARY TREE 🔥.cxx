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

//..................................................................................................................................

void zigZagTvrsal(Tree *root)
{
    vector<vector<int>> result;
    if (root == NULL)
    {
          return ;
    }
    
    queue <Tree * > q;
    q.push(root);
    bool lTor = true;
    
    while(!q.empty()){
          int size = q.size();
          vector <int> row (size);
          
          for(int i=0;i<size;i++){
                Tree* temp = q.front();
                q.pop();
                
                //find position to fill nodes value
 
               int index = (lTor)?i:(size-1-i);
               row[index]=temp->data;
               if(temp->left){
                q.push(temp->left);
               }
               if(temp->right){
                q.push(temp->right);
               }
                
          }
          
          //after this level
             lTor=!lTor;
             result.push_back(row);
          
          
    }
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    
 
}

    //..................................................................................................................................

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

    //..................................................................................................................................

    void rvrsLvlOrdr(Tree * root)
    {
        queue<Tree *> q;
        stack<Tree *> s;
        q.push(root);
        while (!q.empty())
        {
            Tree *temp = q.front();
            s.push(q.front());
            q.pop();

            if (temp->right)
            {
                q.push(temp->right);
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
        }
        while (!s.empty())
        {
            cout << s.top()->data << "  ";
            s.pop();
        }
    }

    //..................................................................................................................................

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

    //..................................................................................................................................

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

    //..................................................................................................................................

    pair<bool, int> IsbalancedFast(Tree * root)
    {
        //Base case

        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<bool, int> left = IsbalancedFast(root->left);
        pair<bool, int> right = IsbalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff;
        if (abs(left.second - right.second) <= 1)
        {
            diff = true;
        }
        else
        {
            diff = false;
        }

        pair<bool, int> ans;
        ans.first = diff;
        ans.second = max(left.second, right.second) + 1;

        return ans;
    }

    bool isBalanced(Tree * root)
    {
        return IsbalancedFast(root).first;
    }

    //..................................................................................................................................

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

    //..................................................................................................................................

    //insertion in binary tree

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

    int main()
    {
        Tree *root = NULL;
        buildTree(root);
        lvlOdrTvrsal(root);
        cout << " \n " << endl;
        // inOrder(root);

        zigZagTvrsal(root);

        stack<Tree *> s;

        return 0;
    }
//1 2 4 8 -1 -1 -1 5 12 -1 -1 9 -1 -1 3 6 -1 10 -1 -1 7 11 -1 -1 13 -1 -1