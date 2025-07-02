#include<iostream>
using namespace std;

int prime(int n){
    for(int i=1; i<=n; i++){
        if(n % 2 == 0){
            cout << "this is prime" << endl;
        }else{
            cout << "this is not prime" << endl;
        }
    }

}

int main(){
    int n;
    cout << "enter the value: ";
    cin >> n;

    cout << prime(n) << endl;
}