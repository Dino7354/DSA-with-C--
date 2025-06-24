#include<iostream>
using namespace std;
int main() {
    string year[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int monthNumber;

    cout << "Enter month number (1 for January, 2 for February, ..., 12 for December): ";
    cin >> monthNumber;

    if(monthNumber >= 1 && monthNumber <= 12) {
        cout << "Month " << monthNumber << " is " << year[monthNumber - 1] << "." << endl;
    } else {
        cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
    }
}