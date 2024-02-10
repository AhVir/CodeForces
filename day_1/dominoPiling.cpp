/*
    link: https://codeforces.com/problemset/problem/50/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int m, n;
    cin >> m >> n;

    int area = n*m;
    int target = 2*1;

    cout << area/target << endl;

    return 0;
}