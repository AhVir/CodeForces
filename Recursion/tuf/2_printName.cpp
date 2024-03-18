#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if(i>n) return;
    cout << "My name is Hello" << endl;
    // printName(i++,n); -> this will cause an infinite recursion

    printName(++i,n);
}

int main(){
    int n = 0;
    printName(1, n);

    return 0;
}