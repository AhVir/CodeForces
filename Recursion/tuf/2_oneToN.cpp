#include<iostream>
using namespace std;

void oneToN(int x, int count){
    if(count > x){
        return;
    }
    cout << count << endl;
    oneToN(x, ++count);
}

int main(){
    oneToN(10, 1);

    return 0;
}