#include <iostream>
#include <vector>
using namespace std;

// Function to perform linear search
int linearSearch(const vector<int>& v, int target) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    vector<int> numbers = {5, 12, 8, 21, 3, 7};

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    int index = linearSearch(numbers, target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the vector." << endl;
    }

    return 0;
}
