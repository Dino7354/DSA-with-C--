#include<iostream>
using namespace std;
int Binarytodec(int decNum){
    int ans=0, power=1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans+=(rem * power);
         power*=10;
    }
    return ans;
}

int main(){
    int decNum;
     cout << "Enter the number: ";
     cin >> decNum;

     cout << Binarytodec(decNum) << endl;
    //  for(int i=1; i<=10; i++){                        //when we print only ten number of binary to dec
    //      cout << Binarytodec(i) << endl;
    //  }
    return 0;
}