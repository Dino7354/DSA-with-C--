#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);

    cout <<"size of = " << vec.size() << endl;
    cout << "capacity of = " << vec.capacity() << endl;
}