/*
    link: https://codeforces.com/problemset/problem/228/A 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl
#define int long long

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    unordered_set<int> st;
    for(int i=0; i<4; i++){
        int temp; cin >> temp;
        st.insert(temp);
    }

    cout << (4-st.size()) << endl;

    return 0;
}