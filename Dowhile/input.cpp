// input comes from user 
#include <iostream>
using namespace std;
int main() {
    int age, gender;
    string name, city, country, email, phone;
    cout << "Enter you Name: \n";
    cin >> name;
    cout << "Name: " << name << endl;
    cout << "Enter your city: \n";
    cin >> city;
    cout << "Enter your country: \n";
    cin >> country;
    cout << "Country: " << country << endl;

    cout << "Enter your phone number: \n";
    cin >> phone;
    cout << "Phone: " << phone << endl;

    cout << "Enter your email: \n";
    cin >> email;
    cout << "Email: " << email << endl;

    cout << "Enter your gender: \n";
    cin >> gender;
    cout << "Gender: " << (gender == 1 ? "Male" : "Female") << endl;

    cout << "Enter your age: \n";
    cin >> age;
    cout << "Age: " << age << endl;

}