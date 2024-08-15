#include <iostream>

using namespace std;

void enqueue(int q[], int s, int &f, int &r)
{
    if (r + 1 < s)
    {
        cout << "enter element " << endl;

        //write insertion code here
        if (f == -1)
        {
            f = 0;
            r = 0;
            cin >> q[r];
        }
        else
        {
            cin >> q[++r];
        }
    }

    else
    {
        cout << "queue is full" << endl;
    }
}

//next function

void dequeue(int q[], int s, int &f, int &r)
{
    if (f == -1)
    {
        cout << "queue is empty" << endl;
    }
    else if (f == r)
    {
        //only one element in queue
        cout << "deleted element:- " << q[f] <<endl;
    }
    else
    {
        cout << "deleted element is :- " << q[f++] << endl;
    }
}

//next function

void transverse(int q[], int s, int &f, int &r)
{
    if (f == -1)
    {
        cout << "queue is empty " << endl;
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            cout << q[i] << "   ";
        }
    }
}

int main()
{
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    int q[size];
    int fr = -1;
    int re = -1;
  
    int choice;
    
    
    do{
            cout<<"What you want to do :- "<<endl;
    cout<<"1 : enqueue \n2 : dequeue  \n3 : transverse"<<endl;
          cin>>choice;
          
          switch (choice)
        {
        case 1:
            enqueue(q, size, fr, re);
           break;

        case 2:
            dequeue(q, size, fr, re);
            break;

        case 3:
            transverse(q, size, fr, re);
            break;

        case 4:
            cout << "Exiting program" << endl;
            break;

        default:
            cout << "Invalid choice, please enter a valid option" << endl;
            break;
          
          
    }
    
    } while ((re+1)<size);
    enqueue(q, size, fr, re);

    return 0;
}
