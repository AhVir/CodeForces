/*
    link: https://codeforces.com/contest/1899/problem/A 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        (n%3 == 1 || n%3 == 2)?(cout << "First\n"):(cout << "Second\n");
    }

    return 0;
}