// #include<iostream>
// using namespace std;
// int main(){
//     int n, num;
    
//     cout<< "Enter the number: ";
//     cin >> n;

//     num=1;
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             cout << num;
//             num++;

//         }
//         cout << endl;   
//     }
//     cout << "After the loops end the value of num: " << num << endl;
//     return 0;
// }

// /*

// output--

// 1234
// 5678
// 9101112
// 13141516
// After the loops end the value of num: 17

// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter the number: ";
//     cin >> n;

//     char ch ='A';

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << ch;
//             ch=ch+1;
//         }
//         cout << endl;
//     }
//     cout <<"After the completing the loop value of char is: " << ch << endl;
// }

// /*

// output--
// ABCD
// EFGH
// IJKL
// MNOP
// After the completing the loop value of char is: Q

// */

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
    
//     cout <<"Enter the number: ";
//     cin >> n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << ( i+1) <<" ";
//         }
//       cout << endl;
//     }
// }

// /*

// output--
// Enter the number: 4
// 1 
// 2 2
// 3 3 3
// 4 4 4 4

// */


// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout <<"enter the number: ";
//     cin >> n;

//     char ch = 'A';
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << ch << " ";
//         }
//         ch = ch+1;
//         cout << endl ;
//     }
// }

// /*

// output--
// enter the number: 4
// A 
// B B
// C C C
// D D D D

// */

#include<iostream>
using namespace std;
int main(){
    int n;

    cout <<"enter the number: ";
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=1; j<i+1; j++){
            cout << j <<" ";
        }
        cout << endl ;
    }
}

/*

output--
enter the number: 6

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

