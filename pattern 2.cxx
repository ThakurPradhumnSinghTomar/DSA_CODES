#include <iostream>

using namespace std;

int main() {
    int rows = 5; // Change the number of rows as needed

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}