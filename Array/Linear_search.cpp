// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[] = {4,2,7,8,1,2,5};
//     int target = 8;
//     int size = 7;

//     for(int i=0; i<size; i++){
//         if(arr[i] == target){
//             cout << i;
//         }
//     }
// }

#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {4,2,7,9,8,12,18};
    int size=7;
    int target;
    cout << "Enter the target value which see in aaray: ";
    cin >> target;

    cout << linearSearch(arr, size, target) << endl;

    return 0;
}