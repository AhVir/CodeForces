/*
    link: https://codeforces.com/problemset/problem/231/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif     

    int q; cin >> q;
    int sum = 0;
    while(q--){
        int i = 0;
        int temp = 0;
        while(i<3){
            int n; cin >> n;
            if(n==1) temp++;
            i++;
        }
        (temp>=2)?(sum++):0;
    }
    cout << sum << endl;

    return 0;
}