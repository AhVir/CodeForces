/*
    link: https://codeforces.com/problemset/problem/339/A 
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

    string s; cin >> s;
    vector<char> ans;
    for(int i=0; i<s.length(); i++){
        if(s[i] != '+'){
            ans.pb(s[i]);
        }
    }

    sort(ans.begin(), ans.end());

    for(int i=0; i<ans.size(); i++){
        cout << ans[i];
        if(i != ans.size()-1){
            cout << "+";
        }
    }
    cout << endl;
    return 0;
}