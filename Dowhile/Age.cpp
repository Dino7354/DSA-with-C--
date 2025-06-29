#include<iostream>
using namespace std;
int main() {
    int age ;
    cout << "Enter your age: " "\n";
    cin >> age;
    if (age < 18) {
        cout << "You are a minor." << "\n";
    } else if (age >= 18 && age < 65) {
        cout << "You are an adult." << "\n";
    } else {
        cout << "You are a senior citizen." << "\n";
    }
    
    return 0;
}


