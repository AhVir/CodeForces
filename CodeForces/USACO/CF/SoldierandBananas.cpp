/*
    link: https://codeforces.com/problemset/problem/546/A
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../../in.txt", "r", stdin);
    #endif

    int k, n, w; cin >> k >> n >> w;

    int needK = 0;
    for(int i=1; i<=w; i++){
        needK += (k*i);
    }
    if(needK < n) cout << 0 << endl;
    else cout << needK-n << endl;

    return 0;
}