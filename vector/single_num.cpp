#include<iostream>
#include<vector>
using namespace std;

int singlenumber(vector<int>& nums){
    int ans = 0;
    for(int val : nums){
        ans^=val;
    }

    return ans;
}

int main(){
    vector<int> vec ={4,2,1,2,1};

    cout <<"single num = " << singlenumber(vec) << endl;
}