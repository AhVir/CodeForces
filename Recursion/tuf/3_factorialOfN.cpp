#include<iostream>
using namespace std;

int factorialOfN(int x){
    if(x==1) return 1;
    return x * factorialOfN(x-1);
}

int main(){
    int n = 3;

    cout << factorialOfN(n) << endl;

    return 0;
}