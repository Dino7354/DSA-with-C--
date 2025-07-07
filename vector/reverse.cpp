#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a vector
void reverseVector(vector<int>& v) {
    int start = 0;
    int end = v.size() - 1;

    while (start < end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

// Function to print vector
void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Original vector: ";
    printVector(numbers);

    reverseVector(numbers);

    cout << "Reversed vector: ";
    printVector(numbers);

    return 0;
}
