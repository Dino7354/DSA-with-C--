#include <iostream>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string result = "";
    int i = 0, j = 0;
    int n1 = word1.length(), n2 = word2.length();

    // Add alternating characters
    while (i < n1 && j < n2) {
        result += word1[i++];
        result += word2[j++];
    }

    // Append remaining characters from word1
    while (i < n1) {
        result += word1[i++];
    }

    // Append remaining characters from word2
    while (j < n2) {
        result += word2[j++];
    }

    return result;
}

int main() {
    string word1 = "abcd", word2 = "pq";
    cout << "Merged: " << mergeAlternately(word1, word2) << endl;
    return 0;
}
