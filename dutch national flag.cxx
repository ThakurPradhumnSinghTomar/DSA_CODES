#include <iostream>

using namespace std;

int main()
{
    int arr[] = {0, 2, 1, 0, 0, 2, 1, 2, 0, 2, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i : arr)
    {
        cout << i << " ";
    }

    cout << " " << endl;

    int n0 = 0,  n2 = n - 1;
    for (int i = 0; i <= n2;)
    {
        if (arr[i] == 0)
        {
            
            swap(arr[n0],arr[i]);
            i++;
            n0++;
        }

     

   else    if (arr[i] == 2)
        {
            
            
            swap(arr[n2],arr[i]);
            n2--;
            
        }
        
        else { i++; }
    }

   

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
