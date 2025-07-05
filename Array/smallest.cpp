#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[] = {5, 15, 1, -15, 14, 2, -18};
    int size = 7;
    int smallest = INT_MAX;
    int index = 1;

    for(int i=0; i<size; i++){
        if(num[i] < smallest){
             smallest = num[i];
             index = i;
        }
    }

    cout << "smallest = " << smallest << endl;
    cout << "index = " << index << endl;

}