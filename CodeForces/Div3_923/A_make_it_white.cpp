/*
    link: https://codeforces.com/contest/1927/problem/A
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

        //-> my approach:
        // int first = -1, last = -1;
        // //first occurrence
        // for(int i=0; i<n; i++){
        //     if(s[i] == 'B'){
        //         first = i;
        //         break;
        //     }
        // }
        // //last occurrence
        // for(int i=n-1; i>=0; i--){
        //     if(s[i] == 'B'){
        //         last = i;
        //         break;
        //     }
        // }
        // cout << last-first+1 << endl;


        //other:
        int minVal = INT_MAX; int maxVal = -1;
        for(int i=0; i<n; i++){
            if(s[i] == 'B'){
                minVal = min(minVal, i);
                maxVal = i;
            }
        }
        cout << maxVal-minVal+1 << endl;
    }

    return 0;
}