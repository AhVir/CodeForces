/*
    link: https://codeforces.com/contest/1945/problem/A
*/

#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout<<#x<<"="<<x<<endl
#define endl "\n"
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;
    while(t--){
        int a, b, c; cin >> a >> b >> c;

        if(a == 0 && c == 0){
            if(b%3 == 0){
                cout << b/3 << endl;
            }
            else{
                cout << -1 << endl;
            }
            continue;
        }

        if(a == 0 && b == 0){
            if(c%3 != 0){
                c /= 3;
                c++;
                cout << c << endl;
            }
            else{
                cout << c/3 << endl;
            }
            continue;
        }

        int temp = b%3;

        if(temp != 0){
            int remain = 3 - temp;
            c -= remain;
            if(c < 0){
                cout << "-1" << endl;
                continue;
            }
            b += remain;
        }

        if(c%3 != 0){
            c /= 3;
            c++;
        }
        else{
            c /= 3;
        }

        int total = a + (b/3) + c;
        cout << total << endl;
    }

    

    return 0;
}