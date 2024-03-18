#include<bits/stdc++.h>
using namespace std;

int powerRecur(int a, int b){
    //base:
    if(b == 0){
        return 1;   
    }
    if(b == 1){
        return a;
    }


    //div & conquer
    int div = b/2;

    int leftTree = powerRecur(a, div);
    // int rightTree = powerRecur(a, div);

    if(b%2 != 0){
        return leftTree * leftTree * a;
    }
    return leftTree * leftTree;
}

int main(){
    int x = 2, y = 4;

    int power = powerRecur(x, y);
    cout << power << endl;

    return 0;
}