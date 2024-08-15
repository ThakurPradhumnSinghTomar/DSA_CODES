#include <iostream>

using namespace std;

//lets display tic tac toe table here :-

//  a  b  c
//  d  e  f
//  g  h  i

void printTable(char array[9])
{
    cout << " " << array[0] << " " << array[1] << " " << array[2] << endl;
    cout << " " << array[3] << " " << array[4] << " " << array[5] << endl;
    cout << " " << array[6] << " " << array[7] << " " << array[8] << endl;
}

int enterValue(char array[9])
{
    int i;
    cout << "Enter at which spot in table, you want to enter :";
    cin >> i;

    return i;
}

int main()
{
    char table[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    //char g;
    //    cout << "Enter x or o (enter small letter) : ";
    //    cin >> g;

    printTable(table);
    int k = enterValue(table);
    table[k - 1] = 'X';

    printTable(table);
    cout << " " << endl;
    cout << " next turn" << endl;
    cout << " " << endl;
    int l = enterValue(table);
    //char h;
    //    cout << "Enter o (enter small letter) : ";
    //    cin >> h;
    table[l - 1] = 'O';

    printTable(table);

    cout << " " << endl;
    cout << " next turn" << endl;
    cout << " " << endl;
    int m = enterValue(table);
    //char j;
    //    cout << "Enter x (enter small letter) : ";
    //    cin >> j;
    table[m - 1] = 'X';

    printTable(table);

    cout << " " << endl;
    cout << " next turn" << endl;
    cout << " " << endl;
    int n = enterValue(table);
    // char v;
    //    cout << "Enter x (enter small letter) : ";
    //    cin >> v;
    table[n - 1] = 'O';

    printTable(table);

    cout << " " << endl;
    cout << " next turn" << endl;
    cout << " " << endl;
    int o = enterValue(table);
    //    char x;
    //    cout << "Enter o (enter small letter) : ";
    //    cin >> x;
    table[o - 1] = 'X';

    printTable(table);
    cout << " " << endl;

    if (((k + m + o) == 12) && (k == 1 || k == 4 || k == 7) && (m == 1 || m == 4 || m == 7) && (o == 1 || o == 4 || o == 7))
    {
        cout << "  'X' wins ; 'O' loose" << endl;
        return 0;
    }
    else if (((k + m + o) == 15) && (k == 2 || k == 5 || k == 8) && (m == 2 || m == 5 || m == 8) && (o == 2 || o == 5 || o == 8))
    {
        cout << "  'X' wins ; 'O' loose" << endl;
        return 0;
    }

    else if (((k + m + o) == 18) && (m == 3 || m == 6 || m == 9) && (k == 3 || k == 6 || k == 9) && (o == 3 || o == 6 || o == 9))
    {
        cout << "  'X' wins ; 'O' loose" << endl;
        return 0;
    }

    else if (((k + m + o) == 6) && (k == 1 || k == 2 || k == 3) && (m == 1 || m == 2 || m == 3) && (o == 1 || o == 2 || o == 3))
    {
        cout << "  'X' wins 'O' loose" << endl;
        return 0;
    }

    else if (((k + m + o) == 15) && (k == 1 || k == 5 || k == 9) && (m == 1 || m == 5 || m == 9) && (o == 1 || o == 5 || o == 9))
    {
        cout << "  'X' wins 'O' loose" << endl;
        return 0;
    }

    else if (((k + m + o) == 15) && (k == 4 || k == 5 || k == 6) && (m == 4 || m == 5 || m == 6) && (o == 4 || o == 5 || o == 6))
    {
        cout << "  'X' wins 'O' loose" << endl;
        return 0;
    }

    else if (((k + m + o) == 24) && (k == 7 || k == 8 || k == 9) && (m == 7 || m == 8 || m == 9) && (o == 7 || o == 8 || o == 9))
    {
        cout << "  'X' wins 'O' loose" << endl;
        return 0;
    }

    else if (((k + m + o) == 15) && (k == 3 || k == 5 || k == 7) && (m == 3 || m == 5 || m == 7) && (o == 3 || o == 5 || o == 7))
    {
        cout << "  'X' wins 'O' loose" << endl;
        return 0;
    }

    else
    {
        cout << " " << endl;
        cout << " next turn" << endl;
        cout << " " << endl;
        int u = enterValue(table);
        //char j;
        //    cout << "Enter x (enter small letter) : ";
        //    cin >> j;
        table[u - 1] = 'O';

        printTable(table);
        cout << " " << endl;

        if (((l + n + u) == 12) && (l == 1 || l == 4 || l == 7) && (n == 1 || n == 4 || n == 7) && (u == 1 || u == 4 || u == 7))
        {
            cout << " 'O' wins 'X' loose" << endl;
            return 0;
        }
        else if (((l + n + u) == 15) && (l == 2 || l == 5 || l == 8) && (n == 2 || n == 5 || n == 8) && (u == 2 || u == 5 || u == 8))
        {
            cout << " 'O' wins 'X' loose" << endl;
            return 0;
        }

        else if (((l + n + u) == 18) && (l == 3 || l == 6 || l == 9) && (n == 3 || n == 6 || n == 9) && (u == 3 || u == 6 || u == 9))
        {
            cout << " 'O' wins 'X' loose" << endl;
            return 0;
        }

        else if (((l + n + u) == 6) && (l == 1 || l == 2 || l == 3) && (n == 1 || n == 2 || n == 3) && (u == 1 || u == 2 || u == 3))
        {
            cout << "  'O' wins 'X' loose" << endl;
            return 0;
        }

        else if (((l + n + u) == 15) && (l == 1 || l == 5 || l == 9) && (n == 1 || n == 5 || n == 9) && (u == 1 || u == 5 || u == 9))
        {
            cout << " 'O' wins 'X' loose" << endl;
            return 0;
        }

        else if (((l + n + u) == 15) && (l == 4 || l == 5 || l == 6) && (n == 4 || n == 5 || n == 6) && (u == 4 || u == 5 || u == 6))
        {
            cout << "  'O' wins 'X' loose" << endl;
            return 0;
        }

        else if (((l + n + u) == 24) && (l == 7 || l == 8 || l == 9) && (n == 7 || n == 8 || n == 9) && (u == 7 || u == 8 || u == 9))
        {
            cout << " 'O' wins 'X' loose" << endl;
            return 0;
        }

        else if (((l + n + u) == 15) && (l == 3 || l == 5 || l == 7) && (n == 3 || n == 5 || n == 7) && (u == 3 || u == 5 || u == 7))
        {
            cout << "  'O' wins 'X' loose" << endl;
            return 0;
        }

        else
        {
            cout << " " << endl;
            cout << " next turn" << endl;
            cout << " " << endl;
            int p = enterValue(table);
            //    char x;
            //    cout << "Enter o (enter small letter) : ";
            //    cin >> x;
            table[p - 1] = 'X';

            printTable(table);
            cout << " " << endl;
        }
    }

    return 0;
}
