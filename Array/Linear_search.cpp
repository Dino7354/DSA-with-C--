#include<iostream>
using namespace std;
int main(){
    
    int arr[] = {4,2,7,8,1,2,5};
    int target = 8;
    int size = 7;

    for(int i=0; i<size; i++){
        if(arr[i] == target){
            cout << i;
        }
    }
}