/*
    link: https://codeforces.com/problemset/problem/617/A
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
    freopen("../in.txt", "r", stdin);
    #endif

    int x; cin >> x;
    int count = 0;

    for(int i=5; i>=0; --i){
        if(x == 0) break;
        count += (x/i);
        x = x%i;
    }
    cout << count << endl;

    return 0;
}