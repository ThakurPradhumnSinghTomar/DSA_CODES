#include<iostream>
using namespace std;

 void insert(int val, int arr[], int& size)
    {
      //  size = size + 1;
        arr[size] = val;
        int index = size;
        while (index > 0)
        {
            int parent = (index-1) / 2;

            if (arr[index] > arr[parent])
            {
                swap(arr[index], arr[parent]);
                index = parent;
                
            }

            else
            {   size++;
                return;
            }
        }
    }
    
    void printHeap(int arr[], int size){
          for (int i=0;i<size;i++){
                cout<<arr[i]<<"  ";
                
                
          } cout<<endl;
    }
    
    int main() {
          
          int arr[]={60,50,40,30,20};
          int size = 5;
          
            printHeap(arr,size);
          insert(55,arr,size);
          printHeap(arr,size);
          
          
    }