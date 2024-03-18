/*
    link: https://codeforces.com/contest/1883/problem/A 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define prd(x) cout << x << " "
#define ps(x) cout <<#x<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int count = 0; 
        int cur = 1;
        for(int i=0; i<4; i++){
            int n = s[i] - 48;
            if(n == 0) n = 10;
            count += abs(n-cur) + 1;
            cur = n;
        }
        cout << count << endl;
    }

    return 0;
}