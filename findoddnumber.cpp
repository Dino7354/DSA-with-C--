#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    //for even number = n % 2 == 0
    //for odd number = n % 2 != 0

    for(int i=1; i<=n; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
}