/*
    link: https://codeforces.com/contest/1907/problem/A
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
        string s; cin >> s;

        // char c = s[0];
        // int num = s[1] - 48;

        //left & right part part
        for(char ch = 'a'; ch<='h'; ch++){
            if(ch == s[0]) continue;
            cout << ch << s[1] << endl;
        } 

        //upper & lower part
        for(char ch = '1'; ch <= '8'; ch++){
            if(ch == s[1]) continue;
            cout << s[0] << ch << endl;
        }
    }

    return 0;
}