#include<iostream>
using namespace std;

int sumToN_function(int n){
    if(n<=1){
        return n;
    }

    return n + sumToN_function(n-1);
}

int main(){
    int n = 10;

    cout << sumToN_function(n) << endl;

    return 0;
}