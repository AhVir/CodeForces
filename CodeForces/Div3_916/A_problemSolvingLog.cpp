/*
    link: https://codeforces.com/contest/1914/problem/A 
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define prd(x) cout<<x<<" "
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
        int n; cin >> n;
        string s; cin >> s;
        int res = 0;

        //-> my approach:
        // unordered_set<char> st;
        // for(int i=0; i<n; i++){
        //     st.insert(s[i]);
        // } 

        // for(auto it = st.begin(); it != st.end(); it++){
        //     char temp = *it;
        //     int cnt = count(s.begin(), s.end(), temp);
        //     int target = temp - 64;
        //     if(cnt >= target) res++;
        // }
        // cout << res << endl;


        //another approach:
        array<int, 26> ct{};
        for(int i=0; i<n; i++){
            ct[s[i]-'A']++;
        }

        int result = 0;
        for(int i=0; i<26; i++) if(ct[i] > i) result++;
        cout << result << endl;
    }

    return 0;
}