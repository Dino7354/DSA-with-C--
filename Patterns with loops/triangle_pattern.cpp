// // Using nested loop 
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout << "Enter the number of tringle * print: ";
//     cin >> n;

//     for(i=0; i<n; i++) {
//         for(j=0; j<i; j++){
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout << "Enter the number of tringle * print: ";
//     cin >> n;

//     for(i=1; i<=n; i++) {
//         for(j=1; j<=n; j++){
//             cout << " ";
//         }
//         for(j=1; j<= i; j++){
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;

// }

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter the number of tringle * print: ";
    cin >> n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n - i; j++){
            cout << " ";
        }
        for(j=1; j<= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;

}