// Variable with Datatypes and Type casting
#include <iostream>
using namespace std;
  int main() {
    string Fullname = "Dinesh Suthar"; // string Datatype
    int age = 22; // int datatype
    float height = 5.9; // float datatype
    char intial = 'D'; // char datatype
    bool isFresher = true; // bool datatype
    double salary = 5000.50; // double datatype
    cout << "Full Name: " << Fullname << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Initial: " << intial << endl;
    cout << "Is Fresher: " << (isFresher ? "Yes" : "No") << endl;
    cout << "Salary: " << salary << endl;
    // Type casting example
    int intHeight = static_cast<int>(height); // Explicit converting float to int
    int intSalary = static_cast<int>(salary); // Explicit converting double to int
    int value = intial; // Implicit converting char to int (ASCII value)
    cout << "Initial as int: " << value << endl; // Display ASCII value of char
    cout << "Height as int: " << intHeight << endl;
    cout << "Salary as int: " << intSalary << endl;
    return 0;

  }