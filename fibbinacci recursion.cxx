#include <iostream>

int fibonacci(int n) {
    // Base case: Fibonacci of 0 is 0, and Fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
  //  int recursive_result_1 = fibonacci(n - 1);
//    int recursive_result_2 = fibonacci(n - 2);

//    // Combine results
//    int final_result = recursive_result_1 + recursive_result_2;

    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    // Example usage
    int n = 2;
    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;

    return 0;
}