#include <iostream>

using namespace std;

// Function to calculate the N-th Fibonacci number
// using recursion
int fibonacci(int N) {
    // Base case
    
    if (N == 0 || N == 1) return 1;
    
    // Recursive case    
    else return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    int N;
    cin >> N;
    cout << fibonacci(N) << endl;
    return 0;
}