//Bitwise (& And, | or, ^ Xor, << left shift, >> right shift) operator
#include<iostream>
using namespace std;
int main(){
    int a,b;
    
    cout << "Enter the value of a: ";
    cin >>a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout <<"& =" << (a & b) << "\n";
    cout << "| =" << (a | b) << "\n";
    cout << "^ =" << (a ^ b) << "\n";
    cout <<"<< =" << (32<<2) << "\n";
    cout <<">> =" << (32>>2) << "\n";
}