//Star printing using nested loop
#include<iostream>
using namespace std;
int main () {
    int i,n,j;
    cout << "enter the number of line print * :" ;
    cin >> n ;
    for(i=0; i<n ; i++) {
        for(j=0; j<n; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}