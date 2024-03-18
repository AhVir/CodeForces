/*
    link: https://codeforces.com/contest/1881/problem/B 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

void solve(){
    int a, b, c; cin >> a >> b >> c;
    vector<int> vec = {a, b, c};
    sort(vec.begin(), vec.end());

    if(a == b && b==c){
        cout << "YES" << endl;
        return;
    }
    else if((vec[2]%vec[0] == 0) && (vec[1]%vec[0] == 0)){
        if(((vec[1]+vec[2])/vec[0]) <= 5) cout << "YES" << endl;
        else cout << "NO" << endl;
       
        return;
    }

    cout << "NO" << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;
    while(t--){
        solve(); 
    }

    return 0;
}