/*
    link: https://codeforces.com/problemset/problem/486/A
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int n; cin >> n;

    // int sum = 0;
    // for(int i=1; i<=n; ++i){
    //     int temp = i;
    //     if(temp%2 != 0){
    //         temp *= -1; 
    //     }
    //     sum += temp;
    // }
    if(n%2 == 0){
        cout << (n/2) << endl;
    }    
    else{
        int res = -1 * ((n+1)/2);
        cout << res << endl;
    }

    // (n/2) + (-1)^n * n.

    return 0;
}