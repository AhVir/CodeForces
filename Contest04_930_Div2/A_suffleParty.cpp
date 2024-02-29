/*
    link: 
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
#define int long long

int div(int n){
    int lowest = -1;
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            lowest = i;
            break;
        }
    }
    if(lowest != -1){
        return n/lowest;
    }
    else return 1;
}

void sol(){
    int n; cin >> n;
    if(n==1){
        cout << n << endl;
        return;
    }
    int ar[n+1];
    for(int i=0; i<=n; ++i){
        ar[i] = i;
    }

    for(int i=2; i<=n; i++){
        int d = div(i);
        swap(ar[i], ar[d]);
    }

    int* res = find(ar, ar+(n+1), 1);
    cout << res-ar << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    
    int t; cin >> t;
    while(t--){
        sol();
    }

    return 0;
}