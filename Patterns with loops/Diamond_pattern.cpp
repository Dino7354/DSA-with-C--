// // #include<iostream>
// // using namespace std;
// // int main (){
// //     int i,n,j;

// //     cout << "enter the number of line star print: ";
// //     cin >> n;

// //     // Top pyramid
// //     for(i=1; i<=n; i++){
// //         for(j=1; j<=n-i; j++)
// //             cout << " ";
        
// //         for(j=1; j<= 2*i-i; j++) 
// //             cout << "*";
        
// //         cout <<"\n";
// //     }

// //     // Bottom inverted pyramid
// //     for(i=n-1; i >=1; i--){
// //         for(j=1; j<=n - i; j++)
// //         cout << " ";
// //      for(j=1; j<=2*i -1; j++)
// //      cout << "*";
// //      cout <<"\n";
// //     }
// //     return 0;
// // }

// // /*
// // output:
// //          *
// //         **
// //        ***
// //       ****
// //      *****
// //     ******
// //    *******
// //   ********
// //  *********
// // **********
// //  *****************
// //   ***************
// //    *************
// //     ***********
// //      *********
// //       *******
// //        *****
// //         ***
// //          *


// //  */


// #include<iostream>
// using namespace std;
// int main (){
//     int i,n,j;

//     cout << "enter the number of line star print: ";
//     cin >> n;

//     // Top pyramid
//     for(i=1; i<=n; i++){
//         for(j=1; j<=n-i; j++)
//             cout << " ";
        
//         for(j=1; j<= 2*i-1; j++) 
//             cout << "*";
        
//         cout <<"\n";
//     }

//     // Bottom inverted pyramid
//     for(i=n-1; i >=1; i--){
//         for(j=1; j<=n - i; j++)
//         cout << " ";
//      for(j=1; j<=2*i -1; j++)
//      cout << "*";
//      cout <<"\n";
//     }
//     return 0;
// }

// /*

// output:

//          *
//         ***
//        *****
//       *******
//      *********
//     ***********
//    *************
//   ***************
//  *****************
// *******************
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******
//        *****
//         ***
//          *



// */


#include<iostream>
using namespace std;
int main (){
    int i,n,j;

    cout << "enter the number of line star print: ";
    cin >> n;

    // Top pyramid
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++)
            cout << " ";
        
        for(j=1; j<= 2*i-j; j++) 
            cout << "*";
        
        cout <<"\n";
    }

    // Bottom inverted pyramid
    for(i=n-1; i >=1; i--){
        for(j=1; j<=n - i; j++)
        cout << " ";
     for(j=1; j<=2*i -1; j++)
     cout << "*";
     cout <<"\n";
    }
    return 0;
}


/*

output:
    *
   **
  ***
 ****
*****
 *******
  *****
   ***
    *


*/