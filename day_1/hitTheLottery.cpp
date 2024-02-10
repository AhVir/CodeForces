/*
    linK: https://codeforces.com/problemset/problem/996/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    vector<int> ar = {100, 20, 10, 5, 1};
    int n; cin >> n;
    int res =  0;

    for(auto &a:ar){
        res += n/a; 
        n %= a;
    }

    cout << res << endl; 

    return 0;
}