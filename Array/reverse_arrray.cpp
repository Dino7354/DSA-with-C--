#include<iostream>
using namespace std;
void  Reversearray(int arr[], int size){
   int start =0, end = size-1; 

   while (start < end){
       swap(arr[start],arr[end]);
       start++;
       end--;
   }
   
}

int main(){
    int arr[] = {4,2,5,7,5,2,1};
    int size = 7;

    Reversearray(arr, size);
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}