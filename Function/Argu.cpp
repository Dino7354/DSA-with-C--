//Argument basically involved in argument they take a function with argument
// Pass by value like :-

#include<iostream>
using namespace std;

int Argument(int a, int b){
    
    return a+b;
}

int changex(int x){
    return 2*x;
}

int main(){
    int x,y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "enter the value of y: ";
    cin >> y;

    cout << "\n the sum of a and b: " << Argument(x,y) << endl; 

}