#include<iostream>
using namespace std;

void OneToN_backTrack(int n){
    if(n<=1){
        cout << n << endl;
        return;
    }

    OneToN_backTrack(n-1);
    cout << n << endl;
}

int main(){

    OneToN_backTrack(5);

    return 0;
}