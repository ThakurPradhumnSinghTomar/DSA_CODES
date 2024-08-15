#include <iostream>
using namespace std;

//doubly linkdlist

//make node

class Node
{
  public:
    Node *prev;
    Node *next;
    int d;

    //constructor function

    Node(int d)
    {
        this->d=d;
        this->prev=NULL;
        this->next=NULL;
    }
    
    //ye kyun use kr rhe h..!!?
    ~Node() {
        int val = this -> d;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
    
    
}
};

void insertAtHead (int d,Node* &head, Node* &tail){
      if(head==NULL){
            Node* temp = new Node(d);
            head=temp;
            tail=temp;
            
      }
      
      else{
            
            Node* temp = new Node(d);
            temp->prev=tail;
            tail->next=temp;
            tail=temp;
            
            
      }
}


void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

//traversing a linked list
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> d<< " ";
        temp  = temp -> next;
    }
    cout << endl;
}
      
 void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(d,head,tail);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}     
      

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}
   int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int choice, position, data;

    do
    {
        cout << "\n1. Insert at Head\n2. Insert at Tail\n3. Insert at Position\n4. Delete Node\n5. Print Linked List\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data to insert at head: ";
            cin >> data;
            insertAtHead(data,head,tail);
            break;

        case 2:
            cout << "Enter data to insert at tail: ";
            cin >> data;
            insertAtTail(tail,head,data);
            break;

        case 3:
            cout << "Enter position to insert at: ";
            cin >> position;
            cout << "Enter data to insert: ";
            cin >> data;
            insertAtPosition(tail, head, position, data);
            break;

        case 4:
            cout << "Enter position to delete: ";
            cin >> position;
            deleteNode(position, head);
            break;

        case 5:
            cout << "Linked List: ";
            print(head);
            break;

        case 0:
            cout << "Exiting program.";
            break;

        default:
            cout << "Invalid choice. Please try again.";
            break;
        }

    } while (choice != 0);
    
    cout<<"Pradhumn Singh Tomar (0901AI231046)"<<endl;

    return 0;
}   
      
