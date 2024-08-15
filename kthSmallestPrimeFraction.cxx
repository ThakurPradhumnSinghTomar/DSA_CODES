#include<queue>
class Solution
{
  public:
    struct Node
    {
        int i, j;
        double fraction;
        Node(int i, int j, double f)
        {
            this->fraction = f;
            this->i = i;
            this->j = j;
        }
    };
    class compare
    {
      public:
        bool operator()(Node *a, Node *b)
        {
            return (a->fraction > b->fraction);
        }
    };
    vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
    {
        priority_queue<Node *, vector<Node *>, compare> pq;

        for (int j = 0; j < arr.size(); j++)
        {
            for (int i = 0; i < j; i++)
            {
                double f = static_cast<double>(arr[i]) / arr[j];
               
                Node *temp = new Node(i, j, f);
                pq.push(temp);
            }
            
            
        }
        vector <int> ans(2,2);
         Node* temp = new Node (0,0,0);
            for(int i =0;i<k;i++){
                temp  = pq.top();
                  pq.pop();
                   }
            ans[0]=(arr[temp->i]);
            ans[1]=(arr[temp->j]);
            return ans;
    }
};