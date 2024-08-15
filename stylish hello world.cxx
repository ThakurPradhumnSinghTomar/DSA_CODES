#include <iostream>

using namespace std;

int main()
{
    char hello[11] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    //	char world[5] = {'w','o','r','l','d'};

    char random[11] = {'Z', 'z', 'z', 'z', 'z', ' ', 'Z', 'z', 'z', 'z', 'z'};

    int i = 0;
    while (i < 11)
    {
        cout << random[0] << random[1] << random[2] << random[3] << random[4] << random[5] << random[6] << random[7] << random[8] << random[9] << random[10] << " !!" << endl;
        if (random[i] == hello[i])
        {
            i++;
        }
        else
        {
            random[i]--;

            system("cls");
        }
    }

    return 0;
}
