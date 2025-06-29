#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter he num: ";
    cin >> n;

    for (int i=0; i<n; i++){
        //space: in-i-1
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //num1: i+1
        for(int j=1; j<=i+1; j++){
            cout << j;
        }
        //num2: 0
        for(int j=i; j>0; j--){
            cout << j;
        }
          cout << endl;

    }
}

/*

output:
Enter he num: 6
     1
    121
   12321
  1234321
 123454321
12345654321

*/