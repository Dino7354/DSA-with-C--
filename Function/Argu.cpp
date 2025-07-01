//Argument basically involved in argument they take a function with argument
// Pass by value like :-

#include<iostream>
using namespace std;

int Argument(int a, int b){
    
    return a+b;
}

void changex(int x){
    x = 2*x;
    cout << "x = " << x << endl;
}

int main(){
    int x ;
    cout << "Enter the value of x: ";
    cin >> x;

    changex(x);

    cout << "x = "  << x << endl;

    return 0;
    // int x,y;
    // cout << "Enter the value of x: ";
    // cin >> x;
    // cout << "enter the value of y: ";
    // cin >> y;

    // cout << "\n the sum of a and b: " << Argument(x,y) << endl; 

}