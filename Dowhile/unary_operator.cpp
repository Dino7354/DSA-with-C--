//Increment operator example
#include <iostream>
using namespace std;
int main() {
    int a = 15;
    int b = a++; // Post-increment: b gets the value of a before incrementing
    cout << "Value of b after post-increment: " << b << endl; // b is 15
    cout << "Value of a after post-increment: " << a << endl; // a is now 16

    int c = 20;
    int d = ++c; // Pre-increment: d gets the value of c after incrementing
    cout << "Value of c after pre-increment: " << c << endl; // c is now 21
    cout << "Value of d after pre-increment: " << d << endl; // d is 21

// Decrement operator example
    int e = 30;
    int f = e--; // Post-decrement: f gets the value of e before decrement
    cout << "Value of e after post-decrement: " << e << endl; // e is now 29
    cout << "Value of f after post-decrement: " << f << endl; // f is 30

    int g = 40;
    int h = --g; // Pre-decrement: h gets the value of g after decrementing
    cout << "Value of h after pre-decrement: " << h << endl; // h is 39
    cout << "Value of g after pre-decrement: " << g << endl; // g is now 39

    return 0;
}