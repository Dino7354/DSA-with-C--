#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) return "";

    int gcdLength = gcd(str1.length(), str2.length());
    return str1.substr(0, gcdLength);
}

int main() {
    string str1 = "ABABAB", str2 = "ABAB";
    cout << "GCD of Strings: " << gcdOfStrings(str1, str2) << endl;
    return 0;
}
