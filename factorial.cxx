#include <iostream>

using namespace std;

int recursion(int a) {
    if (a <= 1) {
        return 1;
    }

    

    return a*(recursion(a-1));
}

int main() {
    int k;
    cin >> k;
    cout << recursion(k);

    return 0;
}