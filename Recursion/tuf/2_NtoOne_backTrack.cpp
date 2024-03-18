#include<iostream>
using namespace std;

void NtoOne_backTrace(int n, int x){
    if(x>=n){
        cout << x << endl;
        return;
    }
    NtoOne_backTrace(n, x+1);
    cout << x << endl;
}

int main(){
    int n = 6;
    NtoOne_backTrace(n, 1);

    return 0;
}