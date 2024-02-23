/*
    link: https://codeforces.com/contest/1921/problem/A
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
        //-> My Solve:
        // int x1, y1; cin >> x1 >> y1;
        // int x2, y2;
        // for(int i=0; i<3; i++){
        //     int temp1, temp2;
        //     cin >> temp1 >> temp2;

        //     if(temp1 == x1) x2 = temp1, y2 = temp2;
        // }

        // int res = pow((x1-x2), 2) + pow((y1-y2), 2);
        // cout << res << endl;

        int lY = INT_MAX, hY = INT_MIN;

        for(int i=0; i<4; i++){
            int x, y; cin >> x >> y;
            lY = min(y, lY);
            hY = max(hY, y);
        }

        int res = pow((hY - lY), 2);
        cout << res << endl;
    }

    return 0;
}