/*
    link: https://codeforces.com/contest/1881/problem/A
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
        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;
        // cout << s << " " << x << endl;

        if(x.find(s) != string::npos) cout << "0" << endl; 

        else{
            int i=0;
            int task = 0;
            while((i<3) || (x.length() < s.length())){
                x += x, task++;
                if(x.find(s) != string::npos){
                    break;
                }
                i++;
            }
            // pr(x);
            if(x.find(s) != string::npos) cout << task << endl;
            else cout << "-1" << endl;
        }
    }

    return 0;
}