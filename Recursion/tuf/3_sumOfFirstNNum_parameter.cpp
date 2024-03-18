#include<iostream>
using namespace std;

void sumToN_parameter(int n, int sum){
    if(n < 1){
        cout << "Sum : " << sum << endl;
        return;
    }

    sumToN_parameter(n-1, sum+n);
}

int main(){
    int n = 3;

    sumToN_parameter(n, 0);

    return 0;
}