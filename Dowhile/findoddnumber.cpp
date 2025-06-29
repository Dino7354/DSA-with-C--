// #include<iostream>
// using namespace std;
// int main(){
//     int n, oddsum=0;
//     cout << "Enter a number: ";
//     cin >> n;
//     //for even number = n % 2 == 0
//     //for odd number = n % 2 != 0

//     for(int i=1; i<=n; i++){
//         if(i % 2 != 0){
//             cout << i << " ";
//             oddsum += i; // Sum of odd numbers
//             cout << "Sum of odd numbers: " << oddsum << endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int n, evensum=0;
//     cout << "Enter a number:" ;
//     cin >> n;
    
//     for(int i=1; i <=n; i++){
//         if(i%2 ==0){
            
//             evensum+=i;
//         }
//     }
//             cout << "The sum of odd:" << evensum << endl ;
// }

// using while loop
#include <iostream>
using namespace std;
int main() {
    int n, oddsum = 0;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1; // Start from 1
    while (i <= n) {
        if (i % 2 != 0) { // Check if the number is odd
            cout << i << " ";
            oddsum += i; // Sum of odd numbers
        }
        i++; // Increment to the next number
    }
    
    cout << "\nSum of odd numbers: " << oddsum << endl;
    return 0;
}