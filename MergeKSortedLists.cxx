#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
    ListNode(int x, ListNode *next)
    {
        val = x;
        this->next = next;
    }
};

class compare
{  public :
    bool operator()(ListNode *a, ListNode *b)
    {
        return (a->val> b->val);
    }
};

class Solution
{
  public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        //lists is vector contains head of all linkdlist
        //All likdlist are sorted individually

        priority_queue<ListNode*, vector < ListNode*>, compare > minHeap;

        //step 1 :
        int k =  lists.size();
        if(k==0){
              return NULL;
        }

        for (int i = 0; i <k ;i++)
        {
            if(lists[i]!=NULL){
            minHeap.push(lists[i]);
            }
        }
        
        ListNode* head = NULL;
        ListNode* tail = NULL;
    while (minHeap.size()>0)   {
     //step 2;   
        ListNode* temp = minHeap.top();
        minHeap.pop();
        //ans.push_back(temp);
        if(head==NULL){
              head = temp;
              tail = temp;
        }
        else{
              
              tail->next=temp;
              tail= tail->next;
        }
        if(temp->next !=NULL){
              minHeap.push(temp->next);
        }
    }
       return head; 
    }
    
};

int main()
{
    
    
    return 0;
}
