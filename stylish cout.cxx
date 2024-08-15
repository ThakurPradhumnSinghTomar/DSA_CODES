#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void print(char h[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << h[i];
        
    }
    cout<<"\n";
}
int main()
{
    string hello;
    cout << "Enter What You Want To Print" << endl;
    cout << "(Word limit 1000)" << endl;
    getline(cin, hello);

    int len = hello.length();

    char random[1000];

    for (int i = 0; i < 1000; i++)
    {
        random[i] = '_';
    }

    int i = 0;
    
    
    while (i < hello.length())
    {
        print(random, len);
     
        if (random[i] == hello[i])
        {
            i++;
        }
        else
        {
            if (random[i] > hello[i])
            {
                random[i]--;
            }
            else
            {
                random[i]++;
            }

               system("cls");
        }
    }

    return 0;
}
