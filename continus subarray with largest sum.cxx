#include <iostream>

using namespace std;

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    int temp;
    int l = 0;
    int m = 0;
     sum = arr[0];

    for (int i = 0; i < n; i++)
    {
       
        temp = arr[i];
        for (int k = i + 1; k < n; k++)
        {
            temp = temp + arr[k];
            cout<<"temp is :"<<temp<<endl;

            if (temp > sum)
            {
                sum = temp;
                cout<<"sum is : "<<sum<<endl;
                l = i;
                m = k;
            }
        }
    }

    cout << " Largest Sum Is : " << sum << endl;
    cout<<" Continuous array with largest sum is : "<<endl;
    
    for(int i=l;i<=m;i++){
          
          cout<<arr[i]<<" ";
          
    }

    return 0;
}
