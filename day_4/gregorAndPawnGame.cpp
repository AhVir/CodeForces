/*
    link: https://codeforces.com/problemset/problem/1549/B
*/

#include<bits/stdc++.h>
using namespace std;

#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int q; cin >> q;
    while(q--){
        string self, opt;
        int count = 0;
        int n; cin >> n;
        cin >> opt >> self;

        for(int i=0; i<n; i++){
            if(self[i] == '0') continue;
            if(self[i] == '1' && opt[i] == '0'){
                count++;
                opt[i] = '_';
            }
            else if(self[i] == '1' && (opt[i] == '1' || opt[i] == '_')){
                if(i-1 >= 0 && opt[i-1] != '_' && opt[i-1] == '1'){
                    count++;
                    opt[i-1] = '_';
                }
                else if(i+1 <= n-1 && opt[i+1] != '_' && opt[i+1] == '1'){
                    count++;
                    opt[i+1] = '_';
                }
            }
        }
        pp(count);
    }

    return 0;
}