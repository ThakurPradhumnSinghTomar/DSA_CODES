#include <iostream>

using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int arr[] = {6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    for (int i : arr)
    {
        cout << i << "   ";
    }

    cout << " " << endl;

    k = findMax(arr, n) - findMin(arr, n);
    //cout<<k<<endl;
    int s;
    cout << "Enter Value To be Used for Minimise " << endl;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < k - s)
        {
            arr[i] = arr[i] + s;
            // cout<<arr[i]<<endl;
        }
        if (arr[i] > k - s)
        {
            arr[i] = arr[i] - s;
        }
    }

    for (int i : arr)
    {
        cout << i << "   ";
    }
    cout << " " << endl;

    int p = findMax(arr, n) - findMin(arr, n);
    cout << "Minimised Maximum Difference Is :" << p << endl;

    return 0;
}
//not working for (6,10) , k=3 case