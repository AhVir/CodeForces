#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(n != 1){
        cout << n << " ";
        if(n%2 != 0){
            n *= 3;
            n++;
        }
        else{
            n /= 2;
        }
    }
    cout << n << endl;

    return 0;
}