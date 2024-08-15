#include <iostream>

using namespace std;
void enqueue(int q[], int s, int &f, int &r)
{
    if ((f == 0 && r == (size - 1)) || ((r + 1) % size == f))
    {
        cout << "Queue Is Full " << endl;
    }
    else if (f == -1)
    {
        f = 0;
        r = 0;
        cout << "enter the value" << endl;
        cin >> q[r];
    }

    else if (r == size && f != 0)
    {
        r = 0;
        cout << "enter element " << endl;
        cin >> q[r];
    }

    else
    {
        cout << "Enter the value" << endl;
        cin >> q[++r];
    }
}

//another function

void dequeue(int q[], int size, int &f, int &r)
{
    if (f == -1)
    {
        cout << "Deletion Not possible as queue is empty " << endl;
    }
    cout << "deleted element is : " << q[f] << endl;

    if (f == r)
    {
        f = -1;
        r = -1;
    }

    else if (f == size - 1)
    {
        f = 0;
    }
    
    else{
          
          f++;
          
    }
}

//function for traverse the queue

void traverse(int q[], int size, int &f, int &r){
      if(f==-1){
            cout<<"Queue is empty "<<endl;
            
      }
      else if (r>=f){
            
            for(int i=0;i<=r;i++){
                  
                  cout<<q[i]<<" ";
                  
            }
            
            else{
                  for(int i=f;i<size;i++){
                        
                        cout<<q[i]<<"  ";
                        
                        
                  }
                  
                  for(int i=0;i<=r;i++){
                        
                        cout<<q[i]<<"  ";
                        
                        
                  }
                  
                  
            }
            
            
            
      }
      
      
      
      
}



int main()
{
    int size = 5;
    int q[size];
    int f = -1;
    int r = -1;

    enqueue(q, s, f, r);
    return 0;
}
