#include<iostream>
using namespace std;

int Dectobinary(int binNum){
    int ans=0, power=1;
     
    while(binNum > 0){
        int rem = binNum % 10;
        ans += rem*power;
        binNum /= 10;
        power *= 2;
    }

    return ans;
}

int main(){
    int binNum;

    cout <<"Enter the number: ";
    cin >> binNum;

    cout << Dectobinary(binNum) << endl;

    return 0;
}