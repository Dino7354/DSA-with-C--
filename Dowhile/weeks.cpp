#include <iostream>
using namespace std;

int main() {
    string daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int dayNumber;

    cout << "Enter day number (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ";
    cin >> dayNumber;

    if(dayNumber >= 1 && dayNumber <= 7) {
        cout << "Day " << dayNumber << " is " << daysOfWeek[dayNumber - 1] << "." << endl;
    } else {
        cout << "Invalid day number. Please enter a number between 1 and 7." << endl;
    }

    return 0;
}