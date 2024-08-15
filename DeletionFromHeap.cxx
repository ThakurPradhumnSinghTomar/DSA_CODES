#include <iostream>
using namespace std;

void deletionFromHeap(int arr[], int size)
{
    if (size <= 1) {
        return; // Nothing to delete
    }
    
    int lastElement = arr[size - 1]; // Store the last element
    
    arr[0] = lastElement; // Replace root with last element
    size--; // Reduce heap size
    
    // Heapify down from root
    int index = 0;
    while (true) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;
        int largest = index;
        
        // Compare with left child
        if (left < size && arr[left] > arr[largest]) {
            largest = left;
        }
        
        // Compare with right child
        if (right < size && arr[right] > arr[largest]) {
            largest = right;
        }
        
        // If largest is not root
        if (largest != index) {
            swap(arr[index], arr[largest]);
            index = largest;
        } else {
            break;
        }
    }
}

void printHeap(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {60, 50, 40, 30, 20};
    int size = 5;

    printHeap(arr, size);
    deletionFromHeap(arr, size);
    printHeap(arr, size - 1);

    return 0;
}
