/*
    link: https://codeforces.com/contest/1945/problem/B
*/

#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout<<#x<<"="<<x<<endl
#define int long long
#define endl "\n"

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;
    while(t--){
        int a, b, m; cin >> a >> b >> m;

        cout << 2 + (m/b) + (m/a) << endl;
    }

    return 0;
}