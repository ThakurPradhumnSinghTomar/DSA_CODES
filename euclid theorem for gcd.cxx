#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    
        if (a == 0)
    {
        cout << b << endl;
    }

    if (b == 0)
    {
        cout << a << endl;
    }


 while (a  != b)
    {
        if (a > b)
        {
            a = a - b;
           // cout << "a :" << a << endl;
        }
        else
        {
            b = b - a;
         //   cout << "b :" << b << endl;
        }
       // cout<<"nooo..!!!"<<endl;
    }   
    
    cout<<"GCD :- "<<a<<endl;


    return 0;
}
