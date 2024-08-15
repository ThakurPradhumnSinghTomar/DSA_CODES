#include <iostream>
using namespace std;


class Number {
private:
    int value;

public:
    Number(int val){
          value=val;
    }

    // Prefix increment operator (++num)
    Number& operator++() {
        value=-value;
        return *this;
    }

    // Postfix increment operator (num++)
    Number operator++(int) {
        Number temp = value;
        value=-value;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Number n1(89);
    n1++;
    cout<<n1.getValue();

    return 0;
}