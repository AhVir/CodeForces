#include<iostream>
using namespace std;

void NtoOne(int x){
    if(x == 1){
        cout << x << endl; 
        return;
    }
    cout << x << endl;
    // NtoOne(x-1);
    NtoOne(--x); //line 10, 11 both are same, in this case. both will do the same thing.
}

int main(){

    NtoOne(4);

    return 0;
}