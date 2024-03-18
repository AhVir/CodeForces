#include<iostream>
using namespace std;

// void reverseArray(int ar[], int l, int r){
//     if(l>r){
//         return;
//     }
//     int temp = ar[l];
//     ar[l] = ar[r];
//     ar[r] = temp;

//     reverseArray(ar, l+1, r-1);
// }

void reverseArray(int ar[], int l, int n){
    if(l>=(n/2)){
        return;
    }
    int temp = ar[l];
    ar[l] = ar[n-l-1];
    ar[n-l-1] = temp;

    reverseArray(ar, l+1, n);
}

void printArray(int ar[], int len){
    int i = 0;
    while(i<len){
        cout << ar[i] << ", ";
        i++;
    }
    cout << endl;
}

int main(){
    int ar[] = {1, 2, 3, 4, 1};
    int len = sizeof(ar)/sizeof(ar[0]);

    reverseArray(ar, 0, len);

    printArray(ar, len);

    return 0;
}