//calculator program that performs basic arithmetic operations
#include <iostream>
#include <stdexcept>
using namespace std;

int main () {
    int a, b, choice;
    cout << "Enter the value of a integers: ";
    cin >> a;

    cout << "Enter the value of b integers: ";
    cin >> b;

    cout << "Choose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";

    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result of Addition: " << a + b << endl;
            break;
        case 2:
            cout << "Result of Subtraction: " << a - b << endl;
            break;
        case 3:
            cout << "Result of Multiplication: " << a * b << endl;
            break;
        case 4:
            if (b == 0) {
                throw runtime_error("Error: Division by zero is not allowed.");
            }
            cout << "Result of Division: " << static_cast<double>(a) / b << endl;
            break;
        case 5:
            if (b == 0) {
                throw runtime_error("Error: Modulus by zero is not allowed.");
            }
            cout << "Result of Modulus: " << a % b << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid operation." << endl;
    }

    return 0;

}
