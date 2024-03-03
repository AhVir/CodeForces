/*
    link: https://codeforces.com/contest/1606/problem/A
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
#define brk cout<<endl
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
        string s; cin >> s;

        if(s.length() == 1 || (s[0] == s[s.length() -1])){
            cout << s << endl;
            continue;
        }
        else{
            if(s[0] == 'a'){
                s[0] = 'b';
                cout << s << endl;
                continue;
            }
            s[0] = 'a';
            cout << s << endl;
        }
    }

    return 0;
}