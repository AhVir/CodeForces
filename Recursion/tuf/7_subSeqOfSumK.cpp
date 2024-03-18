#include<bits/stdc++.h>
using namespace std;

void subSeqSumK(int ar[], int i, int len, int sum, int k, vector<int> &temp){
    //base Condition
    if(sum == k){
        for(int a:temp) cout << a << " ";
        cout << endl;
        return;
    }
    if(sum > k) return;
    if( i >= len) return;
    

    //Recursive Call
    //take
    temp.push_back(ar[i]);
    subSeqSumK(ar, i+1, len, sum+ar[i], k, temp);

    temp.pop_back();
    subSeqSumK(ar, i+1, len, sum, k, temp);
}

int main(){
    int ar[] = {1, 2, 1};
    int k = 2;
    int len = sizeof(ar)/sizeof(ar[0]);
    vector<int> temp;

    subSeqSumK(ar, 0, len, 0, k, temp);

    return 0;
}