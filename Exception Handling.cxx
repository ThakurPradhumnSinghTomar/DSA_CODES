#include <iostream>
using namespace std;

void testFunction(int value) {
    if (value == 0) {
        throw runtime_error("Runtime error: value is zero");
    } else if (value < 0) {
        throw invalid_argument("Invalid argument: value is negative");
    }
}

int main() {
    try {
        testFunction(0);
    } catch (const runtime_error& e) {
        cout << "Caught a runtime_error: " << e.what() << endl;
    } catch (const invalid_argument& e) {
        cout<< "Caught an invalid_argument: " << e.what() <<endl;
    }
    return 0;
}