#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime
    if (n == 2) return true;  // 2 is the only even prime number
    if (n % 2 == 0) return false; // Even numbers other than 2 are not prime

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Example usage
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number.\n";
    else
        cout << num << " is not a prime number.\n";

    return 0;
}
