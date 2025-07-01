//There are two types of memory in function
//1. Stack = stack is a static memory allocation.
//2. Heep = heep is a dynamic memory allocation.
// Basically its perform in code by using main function its automatically called by compiler.
// when we initillize int varible its store in main memory of stack is called stack frame.

#include<iostream>
using namespace std;

int func(int a, int b){
    if(a>b){
        cout << "a bigger then b: ";
    }else{
        cout << "b is bigger then a: ";
    }
    return a,b;
}

int main(){
    cout << "\n there is the value: "<< func(5,8) << endl;
}