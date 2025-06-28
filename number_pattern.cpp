#include<iostream>
using namespace std;
int main(){
    int n, num;
    
    cout<< "Enter the number: ";
    cin >> n;

    num=1;
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout << num;
            num++;

        }
        cout << endl;   
    }
    cout << "After the loops end the value of num: " << num << endl;
    return 0;
}