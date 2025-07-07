/*
Vector Function:
size;
Push_Back;
pop_back;
front;
back;
at;
*/

//Example of Size vec function
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec = {1, 2 , 5, 6};

//     cout << "size = " << vec.size() << endl;

//     // for eacch loop
//     for(int val : vec){
//         cout << val << endl;
//     }
// }

//Example of push_back vec function
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vec= {'a','b','c','d'};

    cout << "size = " << vec.size() << endl;
    vec.push_back('e');

    cout << "After push back size of = " << vec.size() << endl;

    for( char val : vec){
        cout << val << endl;
    }

}