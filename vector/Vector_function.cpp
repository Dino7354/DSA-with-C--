/*
Vector Function:
size;
Push_Back;
pop_back;
front;
back;
at;
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1, 2 , 5, 6};

    cout << "size = " << vec.size() << endl;

    // for eacch loop
    for(int val : vec){
        cout << val << endl;
    }
}