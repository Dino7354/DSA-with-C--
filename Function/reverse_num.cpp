#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;       // Get last digit
        reversed = reversed * 10 + digit; // Append digit to reversed
        num /= 10;                  // Remove last digit
    }
    return reversed;
}

int main() {
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    int reversedNumber = reverseNumber(number);
    cout << "Reversed number: " << reversedNumber << endl;
    return 0;
}
