// Operator Example
//1. Arithmetic Operators
#include <iostream>
#include <typeinfo>
using namespace std;
int main (){
    int a = 10, b = 5;
    cout << "Addition: " << (a + b) << endl;        // Addition
    cout << "Subtraction: " << (a - b) << endl;     // Subtraction
    cout << "Multiplication: " << (a * b) << endl;  // Multiplication
    cout << "Division: " << (a / b) << endl;        // Division
    cout << "Modulus: " << (a % b) << endl;         // Modulus

    // 2. Relational Operators
    cout << "Is a equal to b? " << (a == b) << endl; // Equal to
    cout << "Is a not equal to b? " << (a != b) << endl; // Not equal to
    cout << "Is a greater than b? " << (a > b) << endl; // Greater than
    cout << "Is a less than b? " << (a < b) << endl; // Less than
    cout << "Is a greater than or equal to b? " << (a >= b) << endl; // Greater than or equal to
    cout << "Is a less than or equal to b? " << (a <= b) << endl; // Less than or equal to

    // 3. Logical Operators
    bool x = true, y = false;
    cout << "Logical AND: " << (x && y) << endl; // Logical AND
    cout << "Logical OR: " << (x || y) << endl;  // Logical OR
    cout << "Logical NOT: " << (!x) << endl;      // Logical NOT

    // 4. Bitwise Operators
    cout << "Bitwise AND: " << (a & b) << endl; //
    cout << "Bitwise OR: " << (a | b) << endl;  // Bitwise OR
    cout << "Bitwise XOR: " << (a ^ b) << endl; //
    cout << "Bitwise NOT: " << (~a) << endl;     // Bitwise NOT
    cout << "Left Shift: " << (a << 1) << endl;
    cout << "Right Shift: " << (a >> 1) << endl; // Right Shift

    // 5. Assignment Operators
    int c = 10;
    c += 5; // c = c + 5
    cout << "c after += 5: " << c << endl; // Output: 15
    c -= 3; // c = c - 3
    cout << "c after -= 3: " << c << endl; // Output:
    c *= 2; // c = c * 2
    cout << "c after *= 2: " << c << endl; // Output:
    c /= 5; // c = c / 5
    cout << "c after /= 5: " << c << endl; // Output: 3
    c %= 2; // c = c % 2
    cout << "c after %= 2: " << c << endl; // Output: 1
    c &= 1; // c = c & 1
    cout << "c after &= 1: " << c << endl; // Output:
    c |= 1; // c = c | 1
    cout << "c after |= 1: " << c << endl; // Output:
    c ^= 1; // c = c ^ 1
    cout << "c after ^= 1: " << c << endl; // Output:
    c <<= 1; // c = c << 1
    cout << "c after <<= 1: " << c << endl; // Output:
    c >>= 1; // c = c >> 1
    cout << "c after >>= 1: " << c << endl; // Output:
    // 6. Unary Operators
    int d = 5;
    cout << "Pre-increment: " << ++d << endl; // Pre-increment
    cout << "Post-increment: " << d++ << endl; // Post-increment
    cout << "Value after post-increment: " << d << endl; // Value after post-increment
    cout << "Pre-decrement: " << --d << endl; // Pre-decrement
    cout << "Post-decrement: " << d-- << endl; // Post-decrement
    cout << "Value after post-decrement: " << d << endl; // Value after post-decrement
    cout << "Negation: " << -d << endl; // Negation
    cout << "Logical NOT: " << !d << endl; // Logical NOT
    // 7. Conditional (Ternary) Operator
    int e = 10, f = 20;
    int max = (e > f) ? e : f; // Conditional operator
    cout << "Maximum of e and f: " << max << endl; // Output: 20
    // 8. Sizeof Operator
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; // Size of int
    cout << "Size of float: " << sizeof(float) << " bytes" << endl
    << "Size of double: " << sizeof(double) << " bytes" << endl; // Size of double
    cout << "Size of char: " << sizeof(char) << " bytes" << endl
    << "Size of bool: " << sizeof(bool) << " bytes" << endl; // Size of bool
    cout << "Size of string: " << sizeof(string) << " bytes" << endl; // Size of string
    // 9. Typeid Operator
    cout << "Type of a: " << typeid(a).name() << endl; // Type of a
    cout << "Type of b: " << typeid(b).name() << endl; // Type of b
    cout << "Type of c: " << typeid(c).name() << endl; // Type of c
    cout << "Type of d: " << typeid(d).name() << endl; // Type of d
    cout << "Type of e: " << typeid(e).name() << endl; // Type of e
    cout << "Type of f: " << typeid(f).name() << endl; // Type of f
    cout << "Type of max: " << typeid(max).name() << endl; // Type of max
    cout << "Type of string: " << typeid(string).name() << endl; // Type of string
    cout << "Type of bool: " << typeid(bool).name() << endl;

    // 10. Comma Operator
    int g = (a = 5, b = 10, a + b);
    cout << "Value of g using comma operator: " << g << endl; // Output: 15
    // 11. Pointer Operators
    int* ptr = &a; // Pointer to a
    cout << "Value of a using pointer: " << *ptr << endl; // Dere
    cout << "Address of a: " << ptr << endl; // Address of a
    cout << "Address of ptr: " << &ptr << endl; // Address of pointer
    // 12. Member Access Operators
    struct Point {
        int x;
        int y;
    };

    return 0;
}