/*
    link: https://codeforces.com/contest/1923/problem/A
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
        vector<int> vec;
        int front = INT_MAX;
        int last = -1;

        for(int i=0; i<n; ++i){
            int temp; cin >> temp;
            vec.pb(temp);
            if(temp == 1){
                front = min(front, i);
                last = i;
            }
        }

        cout << count(vec.begin()+front, vec.begin()+last+1, 0) << endl;
    }

    return 0;
}