/*
    link: https://codeforces.com/problemset/problem/1560/A
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pri pair<int, int>
#define pr(x) cout<<#x<<"="<<x<<endl
#define pp(x) cout <<x<<endl
#define ps(x) cout <<#x<<endl

int count(int x){
    string num = to_string(x);
    return num.size();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    #endif

    int t; cin >> t;
    while(t--){
        int num; cin >> num;
        int cnt = 0;
        int i=0;
        for(i=1; ;i++){
            if(i%3 != 0 && i%10 != 3){
                cnt++;
            }
            // if(i%3 == 0 || i%10 == 3){
            //     continue;
            // }
            if(cnt >= num) break;
        }
        cout << i << endl;
    }

    return 0;
}