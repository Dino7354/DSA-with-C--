// #include<iostream>
// using namespace std;

// int main(){
//     int n =6;
//     int arr[6]={1,2,3,4,5,6};
//     for(int std=0; std<n; std++){
//         for(int end=std; end<n; end++){
//             for(int i=std; i<=end; i++){
//                 cout << arr[i];
//             }
//             cout << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// brute force approach

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=6;
    int arr[6] = {4,-4,1,6,-5,2};

    int maxSum = INT_MIN;

    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end=st; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout <<"max subarray sum = " << maxSum << endl;

    return 0;
}