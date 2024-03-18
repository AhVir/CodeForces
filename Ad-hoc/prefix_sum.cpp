#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("prefix_sum_in.txt", "r", stdin);

    int n; cin >> n;
    int ar[n];

    for(int i=0; i<n; i++) cin >> ar[i];

    int prefixArr[n];
    prefixArr[0] = ar[0];
    for(int i=1; i<n; i++) prefixArr[i] = ar[i] + prefixArr[i-1];

    int q; cin >> q;
    while(q){
        int l, r; cin >> l >> r;

        (l==0)?(cout << prefixArr[r]):(cout << prefixArr[r]-prefixArr[l-1]);
        cout << endl;

        q--;
    }

    return 0;
}