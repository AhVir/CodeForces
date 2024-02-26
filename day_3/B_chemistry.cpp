/*
    link: https://codeforces.com/contest/1883/problem/B
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;    
    while(t--){
        int n, k;
        cin >> n >> k;

        string s; cin >> s;

        int cnt[26];
        memset(cnt, 0, sizeof(cnt));
        for(int i=0; i<n; i++){
            char temp = s[i];
            int idx = temp - 'a';
            cnt[idx]++;
        }

        int even = 0, odd = 0;
        for(int i=0; i<26; i++){
            // cout << (char)('a'+i) << ": " << cnt[i] << endl;
            if(cnt[i] > 0){
                if(cnt[i]%2 == 0) even++;
                else odd++;
            }
        }
        if(odd <= k+1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}