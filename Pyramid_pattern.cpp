// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout << "Enter the number of tringle * print: ";
//     cin >> n;

//     for(i=1; i<=n; i++) {
//         for(j=1; j<=n-i; j++){
//             cout << " ";
//         }
//         for(j=1; j<=2*i-1; j++){
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;

// }

// output= 
//     *
//    ***
//   *****
//  *******
// *********

#include<iostream>
using namespace std;
int main(){
    int i,n,j;

    cout << "Enter the number of line star print: ";
    cin >> n;

    for(i=1; i<=n; i++){
        for(j=1; j<=n+i; j++){
            cout << " ";
        }
        for(j=1; j<=1*i-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

/*
output=
       *
        **
         ***
          ****
*/ 
