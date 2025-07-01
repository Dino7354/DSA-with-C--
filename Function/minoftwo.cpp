#include<iostream>
using namespace std;

//Function
int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }


}
int main(){
    int a,b;
    cout << "enter the number a: ";
    cin >> a;
    cout << "enter the number b: ";
    cin >> b;
    //function call
    cout << "min " << minOfTwo(a,b)<< endl;


}