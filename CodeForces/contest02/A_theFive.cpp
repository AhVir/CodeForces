/*
    link: 
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
        string s; cin >> s;
        int n = 5;
        int A = 0, B = 0;

        for(int i=0; i<n; i++){
            if(s[i] == 'A') A++;
            else B++;
        }

        if(A > B) cout << 'A' << endl;
        else cout << 'B' << endl;
    }

    return 0;
}