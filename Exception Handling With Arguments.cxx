#include <iostream>


using namespace std;

class KhudKaError {
public:
    int errorCode;

    KhudKaError(int code) : errorCode(code) {}
};

int main() {
    try {
        // Throw exception with argument
        throw KhudKaError(404);
    } catch (const KhudKaError& e) {
        cout << "Caught CustomException with error code: " << e.errorCode << endl;
    } catch (...) {
        cout<< "Caught unknown exception" << endl;
    }

    return 0;
}