// #include<iostream>
// using namespace std;

// int sumN(int n){
//     int sum=0;
//     for(int i =1; i<=n; i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;
// }

//calculate the sum of digit of a number.
#include<iostream>
using namespace std;

int sumofdigit(int num){
    int digitsum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        num/=10;
         digitsum +=lastdigit;
    }

    return digitsum;
    
}

int main(){
    int sum;
    cout << "Enter the value of sum: ";
    cin >> sum;

    cout << "sum = " <<sumofdigit(sum) << endl;

    return 0;
    
}