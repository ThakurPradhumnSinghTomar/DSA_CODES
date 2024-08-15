#include <iostream>

using namespace std;

int main()
{
    int array[] = {2, 4, 7, 4, 3, 4, 7, 3, 7, 3};
    int sum;
    cout << "Enter the Sum you want to check :-" << endl;
    cin >> sum;
    int temp = 0;
    int k = 0;
    int l = 0;
    int h = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = i; j < 12; j++)
        {
            temp = temp + array[j];
            k = i;
            l = j;

            if (temp == sum)
            {
                h = 1;
                break;
            }
        }
        if (temp == sum)
        {
            break;
        }
        temp = 0;
    }
    if (h == 1)
    {
        for (int i = k; i < l + 1; i++)
        {
            cout << array[i] << "   ";
        }
    }
    else
    {
        cout << "No such sub array exist" << endl;
    }
    //cout<<k<<"   "<<l<<endl;

    return 0;
}
