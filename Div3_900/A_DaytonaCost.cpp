/*
    link:  https://codeforces.com/contest/1878/problem/A
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

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int flag = 0;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            if(temp == k){
                flag = 1;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    } 

    return 0;
}