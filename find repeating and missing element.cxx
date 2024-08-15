#include <iostream>
#include<vector>

using namespace std;

void yoyo(int arr[], int n)
{
    vector <int>temp (n,0);
    for (int i = 0; i < n; i++)
    {
        temp[arr[i] - 1]++;

        if (temp[arr[i] - 1] > 1)
        {
            cout << "Repeating Number is : " << i + 1 << endl;
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (temp[j] == 0)
        {
            cout << "Missing number is : " << j + 1 << endl;
        }
    }
}

int main()
{
    int arr[]={3,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    yoyo (arr,n);
    
    
    return 0;
}
