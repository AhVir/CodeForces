/*
    link: https://codeforces.com/contest/1589/problem/C 
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
#define chk cout <<"hi"<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];

        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a[i] = temp;
        }
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            b[i] = temp;
        }

        sort(a, a+n);
        sort(b, b+n);

        int flag = 0;

        for(int i=0; i<n; i++){
            //approach 01:

            // if(a[i] > b[i] || a[i]+1<b[i]){
            //     cout << "NO" << endl;
            //     flag = 1;
            //     break;
            // }

            //approach 02:

            if(b[i]-a[i]>1 || a[i] > b[i]){
                // chk;
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if(!flag) cout << "YES" << endl;
    }

    return 0;
}