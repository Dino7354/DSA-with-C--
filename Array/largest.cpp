#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num[] = {5, 15, 1, -15, 14, 2, -18};
    int size = 7;
    int largest = INT_MIN;
    int index = -1;

    for(int i=0; i<size; i++){
        // largest = max(num[i], largest);
        if(num[i] > largest){
            largest = num[i];
            index = i;
        }
    }

    cout << "largest = " << largest << endl;
    cout << "index = " << index << endl;

}