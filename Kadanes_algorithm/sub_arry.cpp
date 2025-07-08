#include<iostream>
using namespace std;

int main(){
    int n =6;
    int arr[6]={1,2,3,4,5,6};
    for(int std=0; std<n; std++){
        for(int end=std; end<n; end++){
            for(int i=std; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}